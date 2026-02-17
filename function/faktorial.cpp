#include <iostream>
using namespace std;
int faktorial(int n);

int main () {

int angka,hasil;
cout << "menghitung angka faktorial :" << endl;
cin >> angka;


hasil = faktorial(angka);
    cout << "nilai dari angka faktorial adalah :" << hasil << endl;
    return 0;
}

int faktorial(int n) {
    if (n <= 1) {
        cout << n ;
        return n;
    } else {
        cout << n << "*" << endl;
         return n * faktorial(n -1);
    }
}