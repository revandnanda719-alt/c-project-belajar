#include <iostream>

int main() {

    int a = 10;
    float b = 7.79f;
    char c = 'c';

    std::cout << (int )a + b << std::endl;
    std::cout << (float)b + a << std::endl;
    std::cout << c + a << std::endl;

    std::cin.get();
    return 0;
}