#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;


struct siswa {

	int pk;
	char NIS[15];
	char nama[50];
	char jurusan[30];
	char kelas[10];
};



int getOption();
void CheckDataBase(fstream &data);
void writedata(fstream &data,int posisi, siswa &inputsiswa);
int getDataSize(fstream &data);
siswa readData(fstream &data,int posisi);
void addDatasiswa(fstream &data);
void displayDatasiswa(fstream &data);
void updateRecord(fstream &data);
void deleteRecord(fstream &data);


int main(){

	fstream data;

	CheckDataBase(data);




	int pilihan = getOption();
	char is_continue;

	enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};


	while(pilihan != FINISH){
		
		switch(pilihan){
			case CREATE:
				cout << "Menambah data siswa" << endl;
				addDatasiswa(data);
				break;
			case READ:
				cout << "Tampilkan data siswa" << endl;
				displayDatasiswa(data);
				break;
			case UPDATE:
				cout << "Ubah data siswa" << endl;
				displayDatasiswa(data);
				updateRecord(data);
				displayDatasiswa(data);
				break;
			case DELETE:
				cout << "Hapus data siswa" << endl;
				displayDatasiswa(data);
				deleteRecord(data);
				displayDatasiswa(data);
				break;
			default:
				cout << "Pilihan tidak ditemukan" << endl;
				break;
		}

		label_continue:

		cout << "Lanjutkan?(y/n) : ";
		cin >> is_continue;
		if ( (is_continue == 'y') | (is_continue == 'Y')){
			pilihan = getOption();
		} else if ((is_continue == 'n') | (is_continue == 'N')){
			break;
		} else {
			goto label_continue;
		}

	}

	cout << "akhir dari program" << endl;

	cin.get();
	return 0;
}


void CheckDataBase(fstream &data){
	data.open("data.bin",ios::out | ios::in | ios::binary);
	//check file ada atau tidak
	if(data.is_open()){
		cout << "database ditemukan"<< endl;
	} else {
		cout << "database tidak ditemukan,buat database baru" << endl;
		data.close();
		data.open("data.bin",ios::trunc | ios::out | ios::in | ios::binary);
	}

}  





int getOption(){
	int input;
	//system("clear");
	 system("cls");
	cout << "\nProgram CRUD data kelas XI RPL " << endl;
	cout << "=============================" << endl;
	cout << "1. Tambah data siswa " << endl;
	cout << "2. Tampilkan data siswa " << endl;
	cout << "3. Ubah data siswa " << endl;
	cout << "4. Hapus data siswa " << endl;
	cout << "5. Selesai" << endl;
	cout << "=============================" << endl;
	cout << "pilih [1-5]? : ";
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	return input;
}

void writedata(fstream &data, int posisi, siswa &inputsiswa) {
	data.seekp((posisi -1)*sizeof(siswa),ios::beg);
	data.write(reinterpret_cast<char*>(&inputsiswa),sizeof(siswa));
}
	int getDataSize(fstream &data){
	int start, end;
	data.seekg(0,ios::beg);
	start = data.tellg();
	data.seekg(0,ios::end);
	end = data.tellg();
	return (end-start)/sizeof(siswa);
}




	void addDatasiswa(fstream &data){
	
	siswa inputsiswa, lastsiswa;

	int size = getDataSize(data);
	
	cout << "ukuran data : " << size << endl;

	if(size == 0){
		inputsiswa.pk = 1;
	} else {
		lastsiswa = readData(data,size);
		cout << "pk = " << lastsiswa.pk << endl;
		inputsiswa.pk = lastsiswa.pk + 1;
	}

	cout << "Nama: ";
	cin.getline(inputsiswa.nama, sizeof(inputsiswa.nama));
	cout << "Jurusan: ";
	cin.getline(inputsiswa.jurusan, sizeof(inputsiswa.jurusan));
	cout << "NIS: ";
	cin.getline(inputsiswa.NIS, sizeof(inputsiswa.NIS));
	cout << "kelas:";
	cin.getline(inputsiswa.kelas, sizeof(inputsiswa.kelas));

	writedata(data,size+1,inputsiswa);

}

siswa readData(fstream &data, int posisi){
	siswa readsiswa;
	data.seekg((posisi - 1)*sizeof(siswa),ios::beg);
	data.read(reinterpret_cast<char*>(&readsiswa),sizeof(siswa));
	return readsiswa;
}

void displayDatasiswa(fstream &data){
	int size = getDataSize(data);
	siswa  showsiswa;
	cout << "no.\tpk.\tNIM.\tNama.\tJurusan.\tkelas." << endl;
	for(int i = 1; i <= size; i++){
		showsiswa = readData(data,i);
		cout << i << "\t";
		cout << showsiswa.pk << "\t";
		cout << showsiswa.NIS << "\t";
		cout << showsiswa.nama << "\t";
		cout << showsiswa.jurusan << "\t";
		cout << showsiswa.kelas << endl;
	}
}


void deleteRecord(fstream &data){
    int nomor, size;
    siswa tempsiswa;
    fstream dataSementara;

    size = getDataSize(data);
    
    // Validasi
    cout << "Hapus nomor (1-" << size << "): ";
    cin >> nomor;
    
    if(nomor < 1 || nomor > size){
        cout << "Nomor tidak valid!" << endl;
        return;
    }
    
    // Show what will be deleted
    siswa deletedSiswa = readData(data, nomor);
    cout << "Akan menghapus: " << deletedSiswa.nama << endl;
    
    // Buka temp file
    dataSementara.open("temp.dat", ios::trunc|ios::out|ios::in|ios::binary);
    
    // Copy semua KECUALI nomor yang di-delete
    int newPosition = 1;
    for (int i = 1; i <= size; i++){
        if (i != nomor) {  
            tempsiswa = readData(data, i);
            writedata(dataSementara, newPosition, tempsiswa);
            newPosition++;
        }
    }
    
    // Tutup & clear original file
    data.close();
    data.open("data.bin", ios::trunc|ios::out|ios::in|ios::binary);
    
    // Copy everything back from temp
    int newSize = newPosition - 1;  // Total records yang tersisa
    for(int i = 1; i <= newSize; i++){
        tempsiswa = readData(dataSementara, i);
        writedata(data, i, tempsiswa);
    }
    
    dataSementara.close();
    
    cout << "Record berhasil dihapus! (" << size << " → " << newSize << " records)" << endl;
}
	
void updateRecord(fstream &data){
	int nomor;
	siswa updatesiswa;
	cout << "pilih no: ";
	cin >> nomor;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	updatesiswa = readData(data,nomor);
	
	cout << "\n\npilihan data: " << endl;
	cout << "NIM : " << updatesiswa.NIS << endl;
	cout << "nama : " << updatesiswa.nama << endl;
	cout << "jurusan : " << updatesiswa.jurusan << endl;
	cout << "kelas : " << updatesiswa.kelas << endl;

	cout << "\nMerubah data: "<< endl;
	cout << "NIS:";
	cin.getline(updatesiswa.NIS, sizeof(updatesiswa.NIS));
	cout << "nama:";
	cin.getline(updatesiswa.nama,sizeof(updatesiswa.nama));
	cout << "jurusan:";
	cin.getline(updatesiswa.jurusan,sizeof(updatesiswa.jurusan));
	cout << "kelas: ";
	cin.getline(updatesiswa.kelas,sizeof(updatesiswa.kelas));

	writedata(data,nomor,updatesiswa);
}