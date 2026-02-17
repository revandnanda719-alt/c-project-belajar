#include <iostream>
using namespace std;

double hitung_luas(double p,double l){
    double luas = p*l;
    return luas;
}
double hitung_keliling(double p,double l){
    double keliling = 2*(p+l);
    return keliling;
}
void tampilkan_luas(double p,double l){
    cout << "menampilkan dengan void" << endl;
    cout << "luasnya adalah:"<< endl;
    cout << hitung_luas(p,l);
}
void tampilkan_keliling(double p,double l){
    cout << "menampilkan dengan void" << endl;
    cout << "kelilingnya adalah:" << endl;
    cout << hitung_keliling(p,l);
}
int main () {
    double panjang,lebar;
    cout << "masukan panjang :";
    cin >> panjang;
    cout << "masukan lebar :";
    cin >> lebar;

    tampilkan_luas(panjang,lebar);
    
    tampilkan_keliling(panjang,lebar);
  
    return 0;
}