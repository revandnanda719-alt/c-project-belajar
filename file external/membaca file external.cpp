#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ifstream fileku;
    std::string output,buffer;
    bool isdata = false;
    int no;
    std::string nama;


	// ios::in
	// ios::ate = mulai dari akhir file
	// ios::binary 



    fileku.open("revand.txt",std::ios::in);

    while(!isdata) {
        std::getline(fileku,buffer);
        output.append("\n" + buffer);
        if(buffer == "data") {
            isdata = true;
        }
    }

    std::cout << output << std::endl;

    getline(fileku,buffer);
    std::cout << buffer << std::endl;
    int jumlah_data = 0;
    while(!fileku.eof()) {
        fileku >> no;
        fileku >> nama;

        std::cout << no << "\t" << nama << std::endl;
        jumlah_data++;

    }

    std::cout << "jumlah data =" <<  jumlah_data << std::endl;

    std::cin.get();
    return 0;
}