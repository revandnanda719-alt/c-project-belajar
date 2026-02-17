#include <iostream>
using namespace std;

int faktorial(int n);

int main () {
    int angka,hasil;
    cout << "silahkan masukan angka faktorial :" << endl;
    cin >> angka;

    hasil = faktorial(angka);
    cout << "\n angka hasil dari faktorial :" << hasil << endl;
}

int faktorial(int n) {
   if (n<= 1) {
    cout << n << endl;
    return n;
   } else {
    cout << n << "*" << endl;
      return n * faktorial (n-1);
   }
}