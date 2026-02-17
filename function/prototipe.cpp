#include <iostream>
using namespace std;
int menghitung_luas(int p,int l);
void printf(int b);
    
int main () {
    int panjang,lebar,luas;
    cout << "masukan panjang" << endl;
    cin >> panjang;
    cout << "masukan lebar" << endl;
    cin >> lebar;

    luas = menghitung_luas(panjang,lebar);

    printf(luas);

    return 0;
} 
    int menghitung_luas(int p,int l){
        return p*l;
    }
    void printf(int b) {
        cout << "hasil:" << b << endl;
    }