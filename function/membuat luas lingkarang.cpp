#include <iostream>
#include <cmath>
using namespace std;
double luas_lingkaran(double M_PI,double r,double r){
    double Luas = M_PI*r*r;
    return Luas;
}
void tampilkan_luas(double M_PI,double r,double r){
    cout << "menampilkan dengan void" << endl;
    cout <<  " luasnya adalah:" << endl;
    cout <<  luas_lingkaran(M_PI,r,r);
}

int main(){
    double M_PI,r,r;
    cout << "masukan jari jari lingkaran ke 1" << endl;
    cin >> r;
    cout << "masukan jari jari lingkaran ke 2" << endl;
    cin >> r;

    tampilkan_luas(M_PI,r,r);
    return 0;
}
