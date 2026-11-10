#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
  std::string name;

public:
  Animal(std::string name) : name(name) { cout << "Animal const\n"; }
  virtual ~Animal() { cout << "animal dec\n"; }
  /*
    Without virtual: `delete a` only called ~Animal,
    because the compiler only looked at the pointer type (Animal*),
    not at the real object. So ~Dog and ~Puppy never ran.

    With virtual: the destructor is in the vtable, so `delete a`
    read the object's vptr (its first 8 bytes) and found the
    real type: Puppy. It started from ~Puppy, and after each
    destructor finished it called its base class's destructor,
    so the order was: ~Puppy -> ~Dog -> ~Animal.

    Danger: without virtual, the derived parts are not cleaned up.
    If they owned heap memory, it would leak (undefined behavior).
    // I used ai for this comment this time.
  */
  virtual std::string sound() = 0;
  virtual std::string getName() = 0;
};

class Dog : public Animal {
public:
  Dog(std::string name) : Animal(name) { cout << "dog const\n"; }
  ~Dog() override { cout << "dog deconst\n"; }
  std::string sound() override { return "Rhaw Rhaw !"; }
  std::string getName() override { return name; }
};
// If we dont use override, we might accidentally create a new function, it also
// prevents to add other parameters than in the base class functions.

class Puppy : public Dog {
public:
  Puppy(std::string n) : Dog(n) { cout << "puppy const\n"; }
  ~Puppy() override { cout << "Puppy deconst\n"; }
  std::string sound() override { return "grr grr.."; }
};

int main() {
  Animal *a = new Puppy("nane");
  cout << a->sound() << "\n" << a->getName() << endl;
  delete a;
}