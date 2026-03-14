#include <iostream>

//macro
#define PI  3.14159

double pi = 3.14159;
double *ptr = &pi;

int main() {

    std::cout << " nilai dari ptr pi " << ptr << std::endl;
    std::cout << "alamat dari double pi : " << &pi << std::endl;
    std::cout << "nilai double pi : " << pi << std::endl;
    std::cout << "nilai PI : " << PI << std::endl;

    std::cin.get();
    return 0;
}