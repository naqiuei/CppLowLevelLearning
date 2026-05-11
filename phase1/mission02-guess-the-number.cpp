#include <iostream>
#include <random>

int main() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distr(1, 100);

  int target = distr(gen);

  int guess{0};
  int attempt{0};

  std::cout << "Welcome to the guessing program!\n ";
  do {
    std::cout << "Enter your guess (0-100) :";
    std::cin >> guess;
    attempt++;
    if (guess < target)
      std::cout << "guess < target.\n";
    if (guess > target)
      std::cout << "guess > target.\n";
    if (guess == target)
      break;
  } while (guess != target);
  std::cout << "You found it at your " << attempt
            << ". guess. Answer : " << guess;

  return 0;
}