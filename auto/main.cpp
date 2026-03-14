#include <iostream>
#include <string>
#include <typeinfo>


template<typename T, typename U> 
 auto max (T a, U b) {
    return (a > b) ?  a : b;
 }


int main() {

    int a = 15;
    std::string b = "revand";
    double c = 12.15;
    float d = 15.16f;
    auto e = max(a,c);
    std::cout << a <<  "\ttipe: " << typeid(a).name() << std::endl;
    std::cout << b <<  "\ttipe: " << typeid(b).name() << std::endl;
    std::cout << c <<  "\ttipe: " << typeid(c).name() << std::endl;
    std::cout << d <<  "\ttipe: " << typeid(d).name() << std::endl;
    std::cout << e <<  "\ttipe: " << typeid(e).name() << std::endl;

    std::cin.get();
    return 0;
}