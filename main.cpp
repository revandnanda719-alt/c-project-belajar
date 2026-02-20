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
				break;
			case DELETE:
				cout << "Hapus data siswa" << endl;
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
	cout << "kelas";
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

