//preprocessing directive
#include <iostream>

//macro merubah nilai dengan nama
#define PI  22/7
#define BAHASA  "english"

//macro untuk fungsi
#define PANGKAT(X) (X*X) //tanda kurung di isi variabel
#define MAX(A,B) ((A > B  ) ? A:B)

int main() {

    std::cout << "nilai PI = " << PI << std::endl;
    std::cout << "tampilkan bahasa : " << BAHASA << std::endl;

    std::cout << "hitung pangkat : " << PANGKAT(20) << std::endl;

    std::cout << "ternary operator : " << MAX(5,10) << std::endl;

    #undef BAHASA
    #define BAHASA "indonesia"
    std::cout << "tampilkan bahasa : " << BAHASA <<  std::endl;

    std::cin.get();
    return 0;
}