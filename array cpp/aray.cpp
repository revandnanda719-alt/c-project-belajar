#include <iostream>
using namespace std;

int main () {

    int nilai [10] = {0,1,2,3,4};

    cout << "alamatnya adalah = " << &nilai [0] << "nilainya adalah = " << nilai [0] <<endl;
    cout << "alamatnya adalah = " << &nilai [1] << "nilainya adalah = " << nilai [1] <<endl;
    cout << "alamatnya adalah = " << &nilai [2]<< "nilainya adalah = " <<  nilai  [2] <<endl;
    cout << "alamatnya adalah = " << &nilai [3] << "nilainya adalah = " << nilai [3] <<endl;
    cout << "alamatnya adalah = " << &nilai [4] << "nilainya adalah = " << nilai [4] <<endl;

    int *ptr = nilai;
    *(ptr+2) = 5;

    cout << endl;
    cout << "alamatnya adalah = " << &nilai [0] << "nilainya adalah = " << nilai [0] <<endl;
    cout << "alamatnya adalah = " << &nilai [1] << "nilainya adalah = " << nilai [1] <<endl;
    cout << "alamatnya adalah = " << &nilai [2]<< "nilainya adalah = " <<  nilai  [2] <<endl;
    cout << "alamatnya adalah = " << &nilai [3] << "nilainya adalah = " << nilai [3] <<endl;
    cout << "alamatnya adalah = " << &nilai [4] << "nilainya adalah = " << nilai [4] <<endl;

    cout << endl;
    cout << "ukuran array = " << sizeof(nilai) << "byte" << endl;
    cout << "jumlah member array = " <<sizeof(nilai)/sizeof(int) << endl;

    return 0;
}