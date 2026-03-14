#include <iostream>
#include "eve.h"

    void fungsi() {

        std::cout << "ini adalah fungsi biasa" << std::endl;
    }

int main() {
    fungsi();
    std::cout << eve::b << std::endl;
    eve::fungsi();
    eve::cout(150);
    std::cin.get();
    return 0;
}