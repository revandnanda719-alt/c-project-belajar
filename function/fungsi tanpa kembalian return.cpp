#include <iostream>
using namespace std;

int kuadrat(int a) {
    int b;
    b = a * a;
    return b;
}
void tampilkan1(int input) {
    cout << "menampilkan dengan void" << endl;
    cout << input << endl;
}
void tampilkan2(int hasil2) {
    cout << "menampilkan dengan void" << endl;
    cout << hasil2 << endl;
}
int tambah (int c,int s) {
    int g;
    g = c + s;
    return g;
}
void tampilkan3(int hasil3) {
    cout << "menampilkan dengan void" << endl;
    cout << hasil3 << endl;
}
int kurang (int h,int t) {
    int w;
    w = h - t;
    return w;
}
void tampilkan4(int hasil4) {
    cout << "menampilkan dengan void" << endl;
    cout << hasil4 << endl;
}
int kali (int o,int y) {
    int j;
    j = o * y;
    return j;
}
void tampilkan5(int hasil5) {
    cout << "menampilkan dengan void" << endl;
     cout << hasil5 << endl;
}
float bagi ( int u,float k) {
    float l;
    l = u / k;
    return l;
}
int main () {
    int input,hasil,c,s,hasil2,h,t,hasil3,o,y,hasil4;
    float u,k,hasil5;
    cout << "nilai kuadrat dari : " << endl;
    cin >> input;
    hasil = kuadrat(input);
    tampilkan1(hasil);
    cout << "masukan angka c :";
    cin >> c;
    cout << "masukan angka s :";
    cin >> s;
    hasil2 = tambah(c,s);
     tampilkan2(hasil2);
    cout << "masukan angka h : ";
    cin >> h;
    cout << "masukan angka t :" ;
    cin >> t;
    hasil3 = kurang(h,t);
    tampilkan3(hasil3);
    cout << "masukan angka o :";
    cin >> o;
    cout << "masukan angka y :";
    cin >> y;
    hasil4 = kali (o,y);
    tampilkan4(hasil4);
    cout << "masukan angka u :" ;
    cin >> u;
    cout << "masukan angka k :";
    cin >> k;
    hasil5 = bagi (u,k);
     tampilkan5(hasil5);

    cout << "ini adalah fungsi return by revand" << endl;
    return 0;
}