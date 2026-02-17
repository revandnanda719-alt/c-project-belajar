#include <iostream>
#include <bitset>
#include <string>

void printbinary(unsigned short val,std::string nama) {
    std::cout << nama << "=" << std::bitset<8>(val) << std::endl;
}

int main () {

    unsigned short a = 10;
    unsigned short b = 5;
    unsigned short c;

    std::cout << "\n & - bitwise and  " << std::endl;
    c = a & b;
    printbinary(a,"a");
    printbinary(b,"b");
    printbinary(c,"c");
    std::cout << "c =" << c << std::endl;

    std::cout << "\n | - bitwise or " << std::endl;
    c = a | b;
    printbinary(a,"a");
    printbinary(b,"b");
    printbinary(c,"c");
    std::cout << "c =" << c << std::endl;

    std::cout << "\n^ - bitwise xor " << std::endl;
    c = a ^ b;
    printbinary(a,"a");
    printbinary(b,"b");
    printbinary(c,"c");
    std::cout << "c =" << c << std::endl;

    std::cout << "\n~ - bitwise not " << std::endl;
    c = ~a;
    printbinary(a,"a");
    printbinary(c,"c");
    std::cout << "c =" << c << std::endl;

    std::cout << "\n<< - bitwise shift left " << std::endl;
    c = a << 2;
    printbinary(a,"a");
    printbinary(c,"c");
    std::cout << "c =" << c << std::endl;

    std::cout << "\n>> - bitwise shift right " << std::endl;
    c = a >> 1;
    printbinary(a,"a");
    printbinary(c,"c");
    std::cout << "c =" << c << std::endl;

    // bitwise operator
// &	AND	Bitwise AND
// |	OR	Bitwise inclusive OR
// ^	XOR	Bitwise exclusive OR
// ~	NOT	
// <<	SHL	Shift bits left
// >>	SHR	Shift bits right


    std::cin.get();
    return 0;
}