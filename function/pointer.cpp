#include <iostream>
using namespace std;

int main () {
    int a = 7;
    int *aptr = nullptr;
    aptr = &a;
    //int a mempunyai data dan alamat memory
    cout << "nilai dari a :" << a << endl;
    cout << "alamat dari nilai a : " << aptr << endl;
    //deferencing, mengambil data dari sebuah pointer
     a = 15;
    cout << "mengambil nilai dari aptr :" << *aptr << endl;
}