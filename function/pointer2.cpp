#include <iostream>
using namespace std;

int main () {
    int b = 10;
    int *bptr = &b;

    cout << "nilai dari value si b :" << b << endl;
    cout << "alamat dari value si b :"<< &b << endl;

    b = 20;
    cout << "mengambil nilai dari dereferencing : " << *bptr << endl; 
}