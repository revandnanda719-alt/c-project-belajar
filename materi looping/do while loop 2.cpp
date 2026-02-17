#include <iostream>
using namespace std;
int main (){
    int barang,belanja,total;
    char uang,lanjut;
    do {
    cout << "selamat datang di marketplace mini by revand" << endl;
    cout << "silahkan masuka barang anda" << endl;
    cin >> barang;
    cout << "silahkan masukan uang anda ke casir" << endl;
    cin >> uang;
    cout << "masukan barang belanja ke keranjang" << endl;
    cin >> belanja;
    cout << "menampilkan daftar belanja anda " << endl;

    if (uang == 100.000) {
        total = barang + belanja;
    } else if ( uang = 10.000) {
        total = barang - belanja;
    } else {
        cout << "uang anda kurang" << endl;
    } 
        cout << "mau belanja lagi ?" << endl;
        cout << "ya atau tidak kalo ya klik enter kalo tidak klik no" << endl;
        cout << "lanjut aja" << endl;
        cin >> lanjut;
    } while ( lanjut == 'y');
     return  0;
}