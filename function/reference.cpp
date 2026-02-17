#include <iostream>
using namespace std;

int main () {
    // variabel
    int n = 2;
    
    cout << "alamat dari value n :" << &n << endl;
    cout << "value dari n:" << n << endl << endl;

    // reference 
    int &a = n;
    cout << "nilai dari a :" << a << endl;
    cout << "alamat dari value a " << &a << endl << endl;

    n = 10;
    cout << "nilai dari n :" << n <<  endl;
    cout << "nilai dari a :" << a << endl;

    a = 26;
     cout << "nilai dari n :" << a << endl;
     cout << "nilai dari a :" << a << endl;

     return 0;

}