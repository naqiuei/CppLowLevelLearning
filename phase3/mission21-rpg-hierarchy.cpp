#include <iostream>
#include <string>
#include <vector>

class Character {
protected:
  std::string name;
  int hp;

public:
  virtual void attack() = 0;
  Character(std::string name, int hp) {
    this->name = name;
    this->hp = hp;
  }
  virtual ~Character() { std::cout << "Char deconstructer called!\n"; };
};

class Warrior : public Character {
public:
  Warrior(std::string n) : Character(n, 100) {}
  void attack() override { std::cout << this->name << " attacked!\n"; }
  ~Warrior() { std::cout << "Warrior destructor called!\n"; }
};

class Mage : public Character {
public:
  Mage(std::string n) : Character(n, 80) {}
  void attack() override { std::cout << this->name << " attacked!\n"; }
  ~Mage() { std::cout << "Mage deconstructer called!\n"; }
};

int main() {
  std::vector<Character *> party;
  party.push_back(new Mage("naqi"));
  party.push_back(new Warrior("emo"));
  for (int i{}; i < party.size(); i++) {
    party.at(i)->attack();
    delete party.at(i);
  }
  return 0;
}