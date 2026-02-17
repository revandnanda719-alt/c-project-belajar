#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ifstream fileku("revand.txt");

    if(!fileku.is_open()){
        std::cout << "File gagal dibuka\n";
        return 1;
    }

    std::string buffer;

    // baca sampai ketemu "Data"
    while(std::getline(fileku, buffer)) {
        std::cout << buffer << std::endl;
        if(buffer == "Data") break;
    }

    int no;
    std::string nama;
    int jumlah_data = 0;

    while(fileku >> no >> nama) {
        std::cout << no << "\t" << nama << std::endl;
        jumlah_data++;
    }

    std::cout << "jumlah data = " << jumlah_data << std::endl;

    return 0;
}