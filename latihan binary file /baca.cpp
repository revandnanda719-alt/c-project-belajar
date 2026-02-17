#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct siswa {
	int nis;
	string nama;
	string kelas;
	string jurusan;
	};

siswa ambildata(int &posisi,fstream &Filedata) {
	siswa bufferdata;
	
	Filedata.seekp((posisi-1)*sizeof(siswa));
	Filedata.read(reinterpret_cast<char*>(&bufferdata),sizeof(siswa));
	
	return bufferdata;
	}
int main() {

fstream Filedata;
siswa bacadata;
Filedata.open("data.bin",ios::in | ios::binary);
int posisi = 3;
bacadata = ambildata(posisi,Filedata);

cout << bacadata.nis << endl;
cout << bacadata.nama << endl;
cout << bacadata.kelas << endl;
cout << bacadata.jurusan << endl;

Filedata.close();
cin.get();
return 0;
}
