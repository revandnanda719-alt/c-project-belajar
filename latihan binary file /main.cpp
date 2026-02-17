#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct siswa{
		int nis;
		string nama;
		string kelas;
		string jurusan;
};
siswa ambildata(int posisi, fstream &Filedata) {
	siswa bufferdata;
	
	Filedata.seekp((posisi-1.) *sizeof(siswa));
	Filedata.read(reinterpret_cast<char*>(&bufferdata),sizeof(siswa));
	return bufferdata;
	}

void menulisdata(siswa &data,fstream &Filedata) {
	Filedata.write(reinterpret_cast<char*>(&data),sizeof(siswa));
	}

void menulisDataByPost(int posisi,siswa &bufferdata,fstream &Filedata) {
	Filedata.seekg((posisi-1)*sizeof(siswa));
	Filedata.write(reinterpret_cast<char*>(&bufferdata),sizeof(siswa));
}

	
int main() {

	std::fstream Filedata;
	Filedata.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
	siswa siswa1,siswa2,siswa3, output;

	siswa1.nis = 19235;
	siswa1.nama = "nanda pratama";
	siswa1.kelas = "XI ";
	siswa1.jurusan = "Teknik komputer jaringan";
	
	siswa2.nis = 14549;
	siswa2.nama = "elsa putri";
	siswa2.kelas = "X ";
	siswa2.jurusan = "rekaya perangkat lunak";
	
	siswa3.nis = 12749;
	siswa3.nama = "aditya";
	siswa3.kelas = "XI ";
	siswa3.jurusan = "teknik mesin";
	
	menulisdata(siswa1,Filedata);
	menulisdata(siswa2,Filedata);
	menulisdata(siswa3,Filedata);
	
	siswa2.nama = "xaviera";
	menulisDataByPost(2,siswa2,Filedata);
	
	output = ambildata(2,Filedata);
	
	cout << output.nis << endl;
	cout << output.nama <<endl;
	cout << output.kelas <<endl;
	cout << output.jurusan << endl;
	
	Filedata.close();
	std::cin.get();
	return 0;
}
