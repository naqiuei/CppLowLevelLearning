#include <iostream>
#include <random>

enum class Choice { Rock = 1, Paper, Scissors };

int main() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distr(1, 3);

  int input{};

  std::cout << "Welcome to the Rock, Paper, Scissors game !\n"
               "What do you choose?"
               "\n1 - Rock\t2 - Paper\t3 - Scissors\n";
  std::cin >> input;
  Choice userchoice = static_cast<Choice>(input);
  Choice aichoice = static_cast<Choice>(distr(gen));
  if (userchoice == aichoice)
    std::cout << "Its tie!\n"
                 "User Choice : "
              << input << "\nAi Choice : " << static_cast<int>(aichoice);
  else if ((userchoice == Choice::Rock && aichoice == Choice::Scissors) ||
           (userchoice == Choice::Paper && aichoice == Choice::Rock) ||
           (userchoice == Choice::Scissors && aichoice == Choice::Paper))
    std::cout << "You won!\n"
                 "User Choice : "
              << input << "\nAi Choice : " << static_cast<int>(aichoice);
  else
    std::cout << "You lost!\n"
                 "User Choice : "
              << input << "\nAi Choice : " << static_cast<int>(aichoice);

  return 0;
}