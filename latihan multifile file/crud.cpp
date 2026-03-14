#include "crud.h"
#include <iostream>
#include <limits>


using namespace std;

void crud::CheckDataBase(fstream &data){
    data.open("data.bin", ios::out | ios::in | ios::binary);

    if(!data.is_open()){
        cout << "database tidak ditemukan, membuat baru...\n";
        data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    } else {
        cout << "database ditemukan\n";
    }
}

int crud::getOption(){
    int input;

    system("cls"); // windows only, yaudah lah

    cout << "\nProgram CRUD data siswa\n";
    cout << "=============================\n";
    cout << "1. Tambah data\n";
    cout << "2. Tampilkan data\n";
    cout << "3. Ubah data\n";
    cout << "4. Hapus data\n";
    cout << "5. Keluar\n";
    cout << "=============================\n";
    cout << "pilih [1-5] : ";

    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return input;
}

int crud::getDataSize(fstream &data){
    data.seekg(0, ios::end);
    return data.tellg() / sizeof(siswa);
}

void crud::writedata(fstream &data, int posisi, siswa &inputsiswa){
    data.seekp((posisi-1) * sizeof(siswa), ios::beg);
    data.write(reinterpret_cast<char*>(&inputsiswa), sizeof(siswa));
}

 crud::siswa crud::readData(fstream &data, int posisi){
    crud::siswa temp;
    data.seekg((posisi-1) * sizeof(siswa), ios::beg);
    data.read(reinterpret_cast<char*>(&temp), sizeof(siswa));
    return temp;
}

void crud::addDatasiswa(fstream &data){
    crud::siswa s;

    int size = getDataSize(data);

    if(size == 0)
        s.pk = 1;
    else
        s.pk = readData(data, size).pk + 1;

    cout << "Nama: ";
    cin.getline(s.nama, sizeof(s.nama));

    cout << "Jurusan: ";
    cin.getline(s.jurusan, sizeof(s.jurusan));

    cout << "NIS: ";
    cin.getline(s.NIS, sizeof(s.NIS));

    cout << "Kelas: ";
    cin.getline(s.kelas, sizeof(s.kelas));

    writedata(data, size+1, s);
}

void crud::displayDatasiswa(fstream &data){
    int size = getDataSize(data);

    crud::siswa s;

    cout << "\nNo\tPK\tNIS\tNama\tJurusan\tKelas\n";

    for(int i=1;i<=size;i++){
        s = readData(data, i);

        cout << i << "\t"
             << s.pk << "\t"
             << s.NIS << "\t"
             << s.nama << "\t"
             << s.jurusan << "\t"
             << s.kelas << "\n";
    }
}

void crud::deleteRecord(fstream &data){
    int nomor, size = getDataSize(data);

    cout << "Hapus nomor (1-" << size << "): ";
    cin >> nomor;

    if(nomor < 1 || nomor > size){
        cout << "nomor tidak valid\n";
        return;
    }

    fstream temp;
    temp.open("temp.bin", ios::trunc | ios::out | ios::in | ios::binary);

    crud::siswa s;
    int newPos = 1;

    for(int i=1;i<=size;i++){
        if(i != nomor){
            s = readData(data,i);
            writedata(temp,newPos++,s);
        }
    }

    data.close();
    remove("data.bin");
    rename("temp.bin","data.bin");

    data.open("data.bin", ios::out | ios::in | ios::binary);

    cout << "record terhapus\n";
}

void crud::updateRecord(fstream &data){
    int nomor;
    cout << "pilih nomor: ";
    cin >> nomor;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    crud::siswa s = readData(data, nomor);

    cout << "Data lama: " << s.nama << "\n";

    cout << "Nama baru: ";
    cin.getline(s.nama, sizeof(s.nama));

    cout << "Jurusan baru: ";
    cin.getline(s.jurusan, sizeof(s.jurusan));

    cout << "NIS baru: ";
    cin.getline(s.NIS, sizeof(s.NIS));

    cout << "Kelas baru: ";
    cin.getline(s.kelas, sizeof(s.kelas));

    writedata(data, nomor, s);
}