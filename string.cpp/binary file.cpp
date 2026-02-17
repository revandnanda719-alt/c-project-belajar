#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::fstream fileku;
    int bilangan = 12345;
    
    fileku.open("data.bin",std::ios::out | std::ios::binary );
    fileku.write(reinterpret_cast<char*>(&bilangan),sizeof(bilangan));
    fileku.close();

    std::cin.get();
    return 0;
}   