#include <iostream>
#include <vector>

int main() {
  std::cout << "Welcome to the program ! (If you want to see average you have "
               "to enter -1)\n";
  std::vector<int> nums{};
  int input{}, min{}, max{};
  float av{};
  do {
    std::cout << "Enter the number that you would like to add to the list "
                 "(Enter -1 for exit.) : ";
    std::cin >> input;
    if (input == -1)
      break;
    nums.push_back(input);
    if (nums.size() == 1) {
      min = input;
      max = input;
    }
    if (input > max) {
      max = input;
    }
    if (input < min) {
      min = input;
    }

    av += input;
    std::cout << "\tmin : " << min << std::endl;
    std::cout << "\tmax : " << max << std::endl;

  } while (true);
  if (nums.size() != 0)
    av = av / nums.size();
  else
    std::cout << "You havent entered any numbers.";
  std::cout << "\taverage : " << av << std::endl;
}