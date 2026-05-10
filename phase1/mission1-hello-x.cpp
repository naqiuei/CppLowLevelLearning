#include <iostream>

// using namespace std;

int main() {
  std::cout << "Welcome, what is your name: ";
  std::string name;
  std::cin >> name;
  std::cout << "Welcome " << name << " !";
  return 0;
}