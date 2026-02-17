#include <iostream>
#include <string>

int main () {

    std::string kata("mobil");
    std::cout << kata << std::endl;

    std::string data;
    std::cout << "masukan kata atau kalimat" << std::endl;
    std::cin >> data;
    std::cout << "data yang dimasukan adalah: " << std::endl;

    std::cout << data << std::endl;

    std::cin.get();
    return 0;
}