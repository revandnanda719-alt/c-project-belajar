#include <iostream>
#include <array>

int main () {

  std::string input;
  std::string nama_rahasia("revand");

        while(true) {
            std::cout << "tebak nama" << std::endl;
            std::cin >> input;
            if(input == nama_rahasia) {
                std::cout << "tebakan anda benar!!!!"<< std::endl;
                break;
            } else {
                std::cout << "tebakan anda salah !!!!" << std::endl;
            }
         } 
         std::cout << "program selesai " << std::endl;

    std::cin.get();
    return 0;
}