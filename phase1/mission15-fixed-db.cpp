#include <cstdint>
#include <fstream>
#include <iostream>

struct student {
  char name[32]; // char is 1 byte long
  float gpa{};   // float is 4 byte's long
};

void add(std::fstream &file, student x) {
  file.seekp(0, std::ios::end);
  file.write(reinterpret_cast<char *>(&x), sizeof(student));
  file.clear();
}

void show(std::fstream &file, int x) {
  file.seekg((x - 1) * sizeof(student)); // I made it x - 1 because otherwise
                                         // output is going to had +1 index.
  student s;
  file.read(reinterpret_cast<char *>(&s), sizeof(student));
  std::cout << "\n------------------\nStudent Name : " << s.name
            << "\nStudent gpa : " << s.gpa << "\n------------------\n";
  file.clear();
}

auto numberofstudents(std::fstream &file) {
  file.seekg(0, std::ios::end);
  auto size = file.tellg();
  file.clear();
  return size / sizeof(student);
}

/*
void list(std::fstream &file) // This isnt efficient but i did this with what i
                              // knew when i was writing this.
{
  file.seekg(0, std::ios::end);
  for (uint32_t i{}; i < numberofstudents(file); i++) // using show is definetly
not efficient i know that i have wrotten the efficient way under there.
  {
    show(file, i);
  }
  file.clear();
}
*/ // !! IMPORTANT NOTE : THIS WAS OLD FUNCTION WHEN I WAS WRITING THIS BECAUSE OF THIS REASON IT HASN'T GOT UPDATED WITH THE INDEX OF BEING -1 BECAUSE OF OUTPUT.

// The way it needed to be (only without numberofstudents thing, we can copy and
// use the function inside it and we can set it to a stable variable then it
// wont call the function at every iteration which will make it much more
// efficient as it should be.)

void list(std::fstream &file) {
  auto numofs = numberofstudents(file);
  for (uint32_t i{1}; i <= numofs;
       i++) // We made i start with 1 because when we changed 'show' function,
            // if i starts with 0 there are going to be -36 bytes inside show
            // func.
  {
    show(file, i);
  }
  file.clear();
}

void update(std::fstream &file, int x,
            student newstudent) // updates or changes a student.
{
  file.seekp((x - 1) * sizeof(student),
             std::ios::beg); // We had to change show because of that we also
                             // had to change this index as x-1 as well.
  file.write(reinterpret_cast<char *>(&newstudent), sizeof(student));
  file.clear();
}

int main() {
  std::fstream file("database.bin",
                    std::ios::binary | std::ios::in | std::ios::out);
  if (!file.is_open()) {
    std::cout << "Error : Couldn't open the file!\nCreating one...\n";
    std::ofstream create("database.bin", std::ios::binary);
    create.close();
    file.open("database.bin", std::ios::binary | std::ios::in | std::ios::out);
  }
  std::cout << "Welcome to the program !\n";
  student s;
  int selection{};
  while (true) {
    std::cout << "------------------\n"
                 "Choose an operation :\n"
                 "1-Add a new student.\n"
                 "2-Show the list.\n"
                 "3-Show a spesific student.\n"
                 "4-Update a student.\n"
                 "5-For exit.\n"
                 "Enter your selection : ";
    std::cin >> selection;
    if (selection == 1) {
      std::cout << "Enter student name : ";
      std::cin.ignore(); // We had to clear it because of the \n. For making
                         // sure nothing goes wrong.
      std::cin.getline(
          s.name,
          32); // normal getline didn't work because it is an 'char' array.
      std::cout << "Enter the gpa : ";
      std::cin >> s.gpa;
      add(file, s);
      std::cout << "Student added !\n";
    } else if (selection == 2) {
      list(file);
      std::cout << "\n";
    } else if (selection == 3) {
      int x{};
      std::cout
          << "What is the number of the student that you would like to see : ";
      std::cin >> x;
      show(file, x);
      std::cout << "\n";
    } else if (selection == 4) {
      int x{};
      std::cout << "What is the number of the student that you would like to "
                   "update : ";
      std::cin >> x;
      std::cout << "Enter new student name : ";
      std::cin.ignore();
      std::cin.getline(
          s.name,
          32); // normal getline didn't work because it is an 'char' array.
      std::cout << "Enter new gpa : ";
      std::cin >> s.gpa;
      update(file, x, s);
      std::cout << "Student Updated !\n";
    } else if (selection == 5) {
      std::cout << "Program is shuttingdown. Cya !\n";
      break;
    }
  }
  return 0;
}