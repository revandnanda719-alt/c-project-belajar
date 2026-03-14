#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "crud.h"



int main(){

	std::fstream data;

	crud::CheckDataBase(data);




	int pilihan = crud::getOption();
	char is_continue;

	enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};


	while(pilihan != FINISH){
		
		switch(pilihan){
			case CREATE:
				std::cout << "Menambah data siswa" << std::endl;
				crud::addDatasiswa(data);
				break;
			case READ:
				std::cout << "Tampilkan data siswa" << std::endl;
				crud::displayDatasiswa(data);
				break;
			case UPDATE:
				std::cout << "Ubah data siswa" << std::endl;
				crud::displayDatasiswa(data);
				crud::updateRecord(data);
				crud::displayDatasiswa(data);
				break;
			case DELETE:
				std::cout << "Hapus data siswa" << std::endl;
				crud::displayDatasiswa(data);
				crud::deleteRecord(data);
				crud::displayDatasiswa(data);
				break;
			default:
				std::cout << "Pilihan tidak ditemukan" << std::endl;
				break;
		}

		label_continue:

		std::cout << "Lanjutkan?(y/n) : ";
		std::cin >> is_continue;
		if ( (is_continue == 'y') | (is_continue == 'Y')){
			pilihan = crud::getOption();
		} else if ((is_continue == 'n') | (is_continue == 'N')){
			break;
		} else {
			goto label_continue;
		}

	}

	std::cout << "akhir dari program" << std::endl;

	std::cin.get();
	return 0;
}


