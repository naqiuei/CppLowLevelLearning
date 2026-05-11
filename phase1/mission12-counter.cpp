#include <fstream>
#include <iostream>

int main() {
  std::ifstream file("test.txt");

  if (!file.is_open()) {
    std::cout << "Error : File couldn't open.";
    return 1;
  }
  int line{}, word{};
  std::string input{};
  while (std::getline(file, input)) {
    line++;
  }
  file.clear();
  file.seekg(0);
  while (file >> input) {
    word++;
  }
  std::cout << "Line count : " << line << "\nWord count : " << word;
}