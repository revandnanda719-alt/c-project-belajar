#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArray ( std::array <int,arraySize>&angka) {
            std::cout << "Array : ";
            for(int &a : angka) {
                std::cout << a << " ";
            }
        std::cout << std::endl;
}

int main () {

    std::array <int,arraySize> angka = {9,4,5,6,3,2,1,8,7,0};
    printArray(angka);

    int angkacari;
    bool ketemu;
    //sort dulu
    //search > binary_search

    std::cout << "mencari angka diatas\n";
    std::cin >> angkacari;
    std::sort(angka.begin(),angka.end());
    ketemu = std::binary_search(angka.begin(),angka.end(),angkacari);

    if(ketemu) {
        std::cout << "ketemu" << std::endl;
    } else {
        std::cout << "tidak ketemu" << std::endl;
    }

    std::cin.get();
    return 0;
}