#include <iostream>
using namespace std;
int luaskotak(int panjang,int lebar) {
    int luas = panjang*lebar;
    return luas;
}
int luaskotak(int sisi) {
    int luas = sisi*sisi;
    return luas;
}
float luaskotak(float sisi) {
    return sisi*sisi;
}
double luaskotak(double sisi) {
    double luas = sisi*sisi;
    return luas;
}
int main () {
    cout << "luaskotak 2x5 :" << luaskotak(2,5)<< endl;
    cout << "luas kotak 4x4 :" << luaskotak(4)<< endl;
    cout << "luas kotak 5,40x5,40 :" << luaskotak(5,40) << endl;
    cout << "luas kotak 3.14x3.14 :" << luaskotak(3.14) << endl;
    return 0;
}