#include <iostream>
#include <fstream>

int main () {

    std::ofstream fileku;

    // ios::out = default, operasi output;
	// ios::app = menuliskan pada akhir baris;
	// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus;

    int a = 10;
    fileku.open("data ke 1.txt", std::ios::out);
    fileku << "menuliskan baris pada file ke 1\n" ;
    fileku << a ;
    fileku.close();

    fileku.open("data ke 2 txt",std::ios::trunc);
    fileku << "menuliskan kalimat pertama ke data 2";
    fileku.close();

    fileku.open("data ke 3.txt",std::ios::app); //append
    fileku << "menuliskan kalimat ke data 3";
    fileku.close();


    std::cin.get();
    return 0;
}