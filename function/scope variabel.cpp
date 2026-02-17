#include <iostream>
using namespace std;
int x = 10;
int ambilglobal() {
    return x; //mengambil variabel global
}

int xfactor() {
    int x = 5;
    return x; //mengambil local scopenya x local
}
int main () {
    cout << "1. variabel global :" << x << endl;
    int x = 8; //mengambil local main
    cout << " 2. variabel local main :" << x << endl;
    cout << "3.variabel ambilglobal :" << ambilglobal() << endl;
    cout << "4.variabel local main :"  << x << endl;
    cout << "5.variabel xfactor :" << xfactor()<< endl;

    cout << "7.variabel local main :" << x << endl;
     { 
        cout << "8.variabel local main :" << x << endl;
        int x =4;
        cout << "9.variabel local block : " << x << endl;
        cout << "10.variabel ambilglobal :" << ::x << endl;
    }
    cout << "11.variabel local main :" << x << endl;
    return 0;
}