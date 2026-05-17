#include <cctype> // For making the decision more reliable.
#include <iostream>

int main() {
  std::cout << "Welcome to the program !\n"
            << "How many integers would you like to store : ";
  int x{};
  std::cin >> x;
  int *arr = new int[x];
  for (int i{}; i < x; i++) {
    std::cout << "Enter " << i << ". index : ";
    std::cin >> arr[i];
  }
  std::cout << "The array is ful, would you like to add more (y/n) : ";
  char a{};
  std::cin >> a;
  a = tolower(a);
  if (a == 'y') {
    int *arr1 = new int[2 * x];
    for (int i{}; i < x; i++) {
      arr1[i] = arr[i];
    }
    for (int i{x}; i < 2 * x; i++) {
      std::cout << "Enter " << i << ". index : ";
      std::cin >> arr1[i];
    }
    std::cout << "Heap Address: " << arr << "\n";
    delete[] arr;
    arr = arr1;
    std::cout << "The new heap Address: " << arr << "\n";
    std::cout << "Array elements are : \n";
    for (int i{}; i < 2 * x; i++) {
      std::cout << i << ". index : \t" << arr1[i] << "\n";
    }
    std::cout << "Thanks for using !\n";
    delete[] arr;
    arr1 = nullptr;
  } else {
    std::cout << "Heap Address: " << arr << "\n";

    std::cout << "Array elements are : \n";
    for (int i{}; i < x; i++) {
      std::cout << i << ". index :" << arr[i] << "\n";
    }
    std::cout << "Thanks for using !\n";
    delete[] arr;
    arr = nullptr;
  }
  return 0;
}