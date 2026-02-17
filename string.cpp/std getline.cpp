#include <iostream>
#include <string>


int main () {


	std::string kalimat_input;


	std::cout << "masukan kalimat " << std::endl;
	std::getline(std::cin,kalimat_input);
	std::cout << "input anda :" << kalimat_input << std::endl;

	int posisi = 0;
	int jumlah = 0;

	while(true) {
		posisi = kalimat_input.find(" ",posisi + 1);
		jumlah++;
		if(posisi < 0) {
			break;
		}
		std::cout << "posisi" << posisi << std::endl;
	}

	std::cin.get();
	return 0;
}