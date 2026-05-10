#include <iostream>
#include <string>

// This is the first way.

/*
int main() {
  std::cout << "Welcome to the program !\nEnter the string that you want to "
               "get reversed : ";
  std::string input{};
  std::getline(std::cin, input);
  std::string output{};

  while (!input.empty()) {
    output += input.back();
    input.pop_back();
  }
  std::cout << "Reversed string is : " << output << std::endl;
}
*/

// This is the second way.

int main() {
  std::cout << "Welcome to the program !\nEnter the string that you want to "
               "get reversed : ";
  std::string input{};
  std::getline(std::cin, input);
  std::string output{};
  int length = input.length() - 1;
  for (int i = length; i >= 0; i--) {
    output += input[i];
  }
  std::cout << "Reversed string is : " << output << std::endl;
}