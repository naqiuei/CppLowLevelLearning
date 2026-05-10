#include <iostream>

void primenumber() { std::cout << "Its a prime number !"; }
void notprimenumber() { std::cout << "Its not a prime number !"; }

void check(int a) {
  if (a < 2) {
    notprimenumber();
    return;
  }
  int b = a / 2;
  for (; b > 1; b--) {
    if (a % b == 0) {
      notprimenumber();
      return;
    }
  }
  primenumber();
}

int main() {
  std::cout << "Welcome to the prime number checker ! \n"
               "Enter the number : ";
  int a{0};
  std::cin >> a;
  check(a);
  return 0;
}