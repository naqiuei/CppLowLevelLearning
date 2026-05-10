#include <iostream>

int main() {
  for (int i{1}; i < 11; i++) {
    for (int j{1}; j < 11; j++)
      std::cout << i * j << "\t";
    std::cout << std::endl;
  }
}