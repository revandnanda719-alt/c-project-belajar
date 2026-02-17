#include <iostream>


union tipe{
    int a;
    char c[4];

};

int main () {
    tipe mean;
    
    mean.a = 12345678;
    
    std::cout << "data a : " << mean.a << std::endl;
    
    mean.c[0] = 'a';
    mean.c[1] = 'd';
    mean.c[2] = 'a';
    mean.c[3] = 'k';
    mean.c[4] = 'u';
    
    std::cout << "data a : " << mean.a << std::endl;
    std::cout << "data c : " << mean.c << std::endl;

std::cin.get();
return 0;
}