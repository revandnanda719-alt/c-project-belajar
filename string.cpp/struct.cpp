#include <iostream>
#include <string>

	struct sparepart_pc{
		std::string nama_komponen;
		long int  harga_komponen;
		std::string kualitas;
		float berat;
	};


int main () {

	sparepart_pc ram;
	sparepart_pc vga;

	ram.nama_komponen = "ram 8 gb";
	ram.harga_komponen =  845560;
	ram.kualitas = "kualitas original dan bagus";
	ram.berat = 140.4;


	std::cout << "ram" << std::endl;
	std::cout << ram.nama_komponen  << std::endl;
	std::cout << ram.harga_komponen << std::endl;
	std::cout << ram.kualitas       << std::endl;
	std::cout << ram.berat          << std::endl;



	vga.nama_komponen = "vga rtx 5090 seri terbaru";
	vga.harga_komponen= 36000000;
	vga.kualitas = "kualitas original bagus baru keluaran dari nvidia";
	vga.berat = 1050.6;

	std::cout << std::endl;

	std::cout << "vga" << std::endl;
	std::cout << vga.nama_komponen << std::endl;
	std::cout << vga.harga_komponen << std::endl;
	std::cout << vga.kualitas << std::endl;
	std::cout << vga.berat << std::endl;

	std::cin.get();
	return 0;
}