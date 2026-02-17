#include <iostream>
#include <string>

int main() {

    std::string kata("catku");

    //menampilkan data string
    std::cout << kata << std::endl;

    //mengambil karakter berdasarkan index
    std::cout << "index ke 0 : " << kata[0] << std::endl;
    std::cout << "index ke 1 : " << kata[1] << std::endl;
    std::cout << "index ke 3 : " << kata[2] << std::endl;
    std::cout << "index ke 4 : " << kata[3] << std::endl; 
    std::cout << "index ke 5 : " << kata[4] << std::endl; 

    //merubah kata pada index 

     kata[3] = 'm';
    std::cout << kata << std::endl;

    // menyambung,concatonetion
    std::string kata4(kata + " biru");
    std::cout << kata4 << std::endl;

    std::string kata5("catku");
    kata4.append(" " + kata5 );
    std::cout << kata4 << std::endl;

    std::string kata6("putih");
    kata4 += " " + kata6;
    std::cout << kata4 << std::endl;

    std::cin.get();
    return 0;
}