#include <iostream>
using namespace std;
    int main(){
        float a,b,hasil;
        char aritmatika;
        cout << "selamat datang ke calculator 2 \n \n" << endl;

        //input dari user
        cout << "masukan angka pertama anda"<< endl;
        cin >> a;
        cout << "pilih operasi anda (+,-,/,*) ="<< endl;
        cin >> aritmatika;
        cout << "silahkan masukan angka kedua =" << endl;
        cin >> b;
        
        //hasil perhitungan
        cout << "\n hasil dari perhitungan" << endl;
        cout << a << aritmatika << b ;
        switch(aritmatika){
            case '+' :
            hasil = a + b;
            break;
            case '-' :
            hasil = a - b;
            break;
            case '/' :
            hasil = a / b;
            break;
            case '*' :
            hasil = a * b;
            break;
            default:
            cout << "anda salah menginput nomor" << endl;
        } 
            cout << " \n ="<< hasil << endl;
        return 0;
    }