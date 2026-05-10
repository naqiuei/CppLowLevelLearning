#include <iostream>

// int pow(int a, int b) {
//   int x{1};
//   for (; b > 0; b--) {
//     x *= a;
//   }
//   return x;
// } // I wrote this because i thought that i ll need this.

int reverse(int number) {
  int reversed{0};
  while (number > 0) {
    int digit = number % 10;
    number /= 10;
    reversed = (reversed * 10) + digit;
  }
  return reversed;
}

int main() {
  std::cout << "Enter the number that you want to get reversed : ";
  int number{0};
  std::cin >> number;
  std::cout << "reversed number : " << reverse(number);
}