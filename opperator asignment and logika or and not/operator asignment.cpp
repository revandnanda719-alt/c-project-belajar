#include <iostream>
using namespace std;
int main(){
    int a = 17;
    cout << "angka sebelum dikasih operator assignment \n"<< a << endl;
    cout << "angka setelah dikasih operator assignment" << endl;
        a +=10;
        cout << "operator assignment penjumlahan 10 \n"<< a << endl;
        a -=10;
        cout << "operator assignment pengurangan 10 \n"<< a << endl;
        a *=10;
        cout << "operator assignment perkalian  10 \n"<< a << endl;
        a /=10;
        cout << "operator assignment pembagian  10\n"<< a << endl;
        a %=10;
        cout << "operator assignment modular 10\n" << a << endl;


    return 0;
}