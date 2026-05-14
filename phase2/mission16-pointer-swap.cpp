#include <iostream>

void swapByReference(int &x, int &y) {
  int c;
  c = x;
  x = y;
  y = c;
}
void swapByPointer(int *xp, int *yp) {
  int c = *xp;
  *xp = *yp;
  *yp = c;
}

int main() {

  int x{}, y{};
  std::cout << "Enter x: ";
  std::cin >> x;
  std::cout << "Enter y; ";
  std::cin >> y;
  swapByReference(x, y);
  std::cout << x << " " << y << "\n";
  swapByPointer(&x, &y);
  std::cout << x << " " << y << "\n";
  std::cout << "X's ram address : " << &x << "\nY's ram address : " << &y;
  return 0;
}