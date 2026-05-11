#include <fstream>
#include <iostream>

int main() {
  std::ifstream file("students.txt");
  std::ofstream fileo(
      "honor-students.txt"); // if you want to add more txt files with that you
                             // can use std::ios::app for ex : std::ofstream
                             // fileo("honor-students.txt", std::ios::app);
  if (!file.is_open() || !fileo.is_open()) {
    std::cout << "Error couldn't open the file.";
    return 1;
  }
  std::string name{};
  float gpa{};

  while (file >> name >> gpa) {
    if (gpa >= 3.5)
      fileo << name << " " << gpa << "\n";
  }
  file.close();
  fileo.close();
  std::cout << "honor-students.txt created.\n";
}