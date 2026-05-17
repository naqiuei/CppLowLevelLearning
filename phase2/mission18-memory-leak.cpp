#include <chrono>
#include <iostream>
#include <thread>

int main() {
  while (true) {
    int *leak = new int[10000000]();
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    delete[] leak; // I wrote this after i tested the upper rows, there were
                   // growing ram leak.
  }
}