#include <iostream>

int main() {
  double number1{0};
  double number2{0};
  std::cout << "Welcome to the simple calculator !\n"
            << "Enter the first number : ";
  std::cin >> number1;
  std::cout << "Enter the second number : ";
  std::cin >> number2;
  int chosen{0};
  std::cout << "1 for addition\n2 for substraction\n3 for multiplation\n4 "
               "for division\nEnter your number : ";
  std::cin >> chosen;
  std::cout << "Answer : ";
  switch (chosen) {
  case 1:
    std::cout << number1 + number2;
    break;
  case 2:
    std::cout << number1 - number2;
    break;
  case 3:
    std::cout << number1 * number2;
    break;
  case 4:
    if (number2 == 0)
      std::cout << "You can't divide by 0!";
    else
      std::cout << number1 / number2;
    break;
  default:
    std::cout << "Invalid key input.";
    break;
  }
  return 0;
}