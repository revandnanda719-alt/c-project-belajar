#include <iostream>
using namespace std;
 int main (){
    float a,b,hasil;
    char aritmatika;
    cout << "selamat datang di calculator 1 \n \n" << endl;

    //input dari user
    cout << "masukan bilangan pertama " ;
    cin >> a;
    cout << "silahkan pilih operasi bilangan (+ - / * )=";
    cin >> aritmatika;
    cout << "masukan bilangan kedua" << endl;
    cin >> b;

    cout << " hasil perhitungan\n \n";
    cout << a << aritmatika << b;
   if (aritmatika == '+') {
        hasil = a + b;
   } else if (aritmatika == '-') {
     hasil = a - b;
   } else if (aritmatika == '/') {
    hasil = a / b;
   }else if (aritmatika == '*')  {
    hasil = a * b;
   } else {
     cout << "input anda salah" << endl;
   }
    cout << "hasil operasi = " << hasil << endl;
    
    cin.get();
    return 0;
 }