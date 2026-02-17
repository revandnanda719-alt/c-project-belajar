#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::fstream fileku;
    int hasil;

    fileku.open("data.bin",std::ios::out | std::ios::binary);
    fileku.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));

    std::cout<< "hasil integer = " << sizeof(hasil) << std::endl;
    std::cout << hasil << std::endl;
    std::cin.get();
    return 0;
}
