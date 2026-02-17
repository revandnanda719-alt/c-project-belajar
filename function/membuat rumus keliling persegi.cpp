#include <iostream>
using namespace std;
int keliling_persegi(int a,int s) {
    int keliling = a*s;
    return keliling;
}

void tampilkan_keliling(int a,int s) {
    cout << "hasil perhitungan rumus keliling persegi" << endl;
    cout << keliling_persegi(a,s);
}
int main () {
int a = 4, sisi;
cout << "masukan sisi perseginya:";
cin >> sisi;
tampilkan_keliling(a,sisi);
cout << "function by ega\n" << endl;
return 0;
}