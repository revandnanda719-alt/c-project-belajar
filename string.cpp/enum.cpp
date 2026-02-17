#include <iostream>

enum snack { 
makaroni,
roti,keripik,pasta
};

int main () {

    snack kemasan;
    
    kemasan = roti;
    
    if (kemasan == roti) {
     std::cout << "anda mendapatkan 1 bungkus roti" << std::endl;
    }
    
    
    std::cout << kemasan << std::endl;

std::cin.get();
return 0;
}