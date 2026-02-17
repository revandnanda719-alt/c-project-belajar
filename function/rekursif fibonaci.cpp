#include <iostream>
using namespace std;

int fibonaci(int n);

int main () {
    int angka,hasil;
    cout << "menghitung fibonaci ke :" << endl;
    cin >> angka;
    hasil = fibonaci(angka);
    cout << "nilainya adalah" << endl;
    cout << hasil << endl;
    return 0;
}

int fibonaci(int n) {
    if ((n==0) || (n==1)) {
        cout << "fungsi fibonaci" << n << endl;
        return n;
    } else {
        return fibonaci(n - 1) + fibonaci ( n - 2);
    }
}