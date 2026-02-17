#include <iostream>
#include <string>

void outputdata(int val) {
    std::cout << val << std::endl;
}

int main() {

    int a;
    int b;
    int c;

    a = ( b = 10,outputdata(b), c = 15,outputdata(c), (b+c) );


    std::cout << a << std::endl;

    std::cin.get();
    return 0;
}