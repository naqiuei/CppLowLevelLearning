#include <iomanip>
#include <iostream>

class Date {
private:
  int day{}, month{}, year{};

public:
  Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
  }
  ~Date() { std::cout << "Date object is deconstructed!\n"; }

  void displayDate() {
    std::cout << std::setw(2) << std::setfill('0') << this->day << "/"
              << std::setw(2) << this->month << "/" << std::setw(2)
              << this->year << "\n";
  }
};

int main() {
  Date myDate(19, 5, 2026);
  myDate.displayDate();
}