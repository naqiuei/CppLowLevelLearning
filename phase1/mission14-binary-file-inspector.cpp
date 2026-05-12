#include <cstdint>
#include <fstream>
#include <iomanip>  //For maki
#include <iostream> //For changing dec to hex.
// I will only read the first 16 bytes.
int main() {
  std::ifstream filein("mission01-hello-x.exe",
                       std::ios::binary | std::ios::ate);
  if (!filein.is_open()) {
    std::cout << "Error : Couldn't open the file.";
    return 1;
  }
  auto size = filein.tellg();

  std::cout << "Size : " << size << "\n";
  filein.seekg(0, std::ios::beg);
  uint8_t buffer[16];
  filein.read(reinterpret_cast<char *>(buffer), 16);
  std::streamsize realsize{}; // not efficient on bigger files. Also on this its
  // for only 16 bytes.
  realsize += filein.gcount(); // thats why its not efficient. this was only
                               // for 16 bytes.

  // This is not inefficient because : Binary headers contain large structs and
  // 32/64-bit integers, not character strings.
  // if (buffer[0] == 'M' && buffer[1] == 'Z')
  //   std::cout << "It's windows.\n";

  uint16_t magic_number = *reinterpret_cast<uint16_t *>(buffer);
  if (magic_number == 0x5A4D)
    std::cout << "It's windows.\n";

  for (int i{}; i < 16; i++) {
    std::cout << std::setw(2) << std::setfill('0') << std::uppercase << std::hex
              << int(buffer[i]) << " ";
  }
  std::cout << "\nReal size (Readable size) : " << std::dec
            << realsize; // When we made the numbers cout as in the hex size in
                         // the loop, it stays until we change it. so we had to
                         // change it back to decimal.
}