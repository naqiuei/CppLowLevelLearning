#include <iostream>
#include <string>

class BankAccount {
private:
  float balance{};
  std::string *accountName{};

public:
  BankAccount(float balance, std::string name) {
    this->balance = balance;
    this->accountName = new std::string(name);
  }

  // copy constructor
  BankAccount(const BankAccount &other) {
    this->balance = other.balance;
    this->accountName = new std::string(*(other.accountName));
  }
  ~BankAccount() {
    std::cout << "BankAccount deconstructer called!\n";
    delete this->accountName;
  }
  float getBalance() { return this->balance; }
  void deposit(float x) {
    if (x < 0) {
      std::cout << "Error ! You can't deposit negative amount !\n";
      return;
    } else {
      this->balance += x;
    }
  }
  void withdraw(float x) {
    if (balance < x) {
      std::cout << "You don't have enough money !\n";
      return;
    } else if (x < 0) {
      std::cout << "You can't withdraw negative amount of money !\n";
    } else {
      balance -= x;
    }
  }
};

int main() {
  BankAccount naqi(1000, "naqi");
  BankAccount spareacc = naqi;
  naqi.deposit(500);
  std::cout << "naqi balance : " << naqi.getBalance()
            << "\nspareacc balance : " << spareacc.getBalance();
  return 0;
}