#include <iostream>
#include <array>
using namespace std;

int main () {
    // membuat array dengan menggunakan standart library
    // rumus array < int, jumlah array > nama array

    array < int, 5 > nilai;
    for (int i = 0; i <= 4; i++) {
        nilai [i] = i;
        cout << "nilai ["<< i << "] = " << nilai [i];
        cout << "addres : " << &nilai[i] << endl;
    }

    cout << endl;
    //ukuran array
    cout << "ukuran array :" << nilai.size() << endl;
    // addres awal 
    cout << "addres awal :" << nilai.begin() << endl;
    //addres akhir
    cout << "addres akhir :" << nilai.end() << endl;
    //nilai dengan index
    cout << "nilai ke 2 :" <<  nilai.at(2) << endl;
    return 0;
}