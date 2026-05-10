#include <iostream>

void generator(int height) {
  for (int i{1}; i <= height; i++) {
    for (int y = height - i; y > 0; y--)
      std::cout << " ";
    for (int x = 2 * i - 1; x > 0; x--)
      std::cout << '*';

    std::cout << "\n";
  }
}

int main() {
  std::cout << "Welcome to the * pyramid maker !\n What height do you want it "
               "to be : ";
  int height{};
  std::cin >> height;
  generator(height);
  return 0;
}