#include <iostream>
#include <fstream>



namespace crud{
    struct siswa {

	int pk;
	char NIS[15];
	char nama[50];
	char jurusan[30];
	char kelas[10];
};

int getOption();
void CheckDataBase(std::fstream &data);
void writedata(std::fstream &data,int posisi, siswa &inputsiswa);
int getDataSize(std::fstream &data);
siswa readData(std::fstream &data,int posisi);
void addDatasiswa(std::fstream &data);
void displayDatasiswa(std::fstream &data);
void updateRecord(std::fstream &data);
void deleteRecord(std::fstream &data);
}