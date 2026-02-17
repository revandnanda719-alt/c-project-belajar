#include <iostream>
using namespace std;
int main () {
    // rumus while loop: while (kondisi / syarat ) syaratnya yaitu boolean karena bolean mempengaruhi keputusan
    int a = 10;
    while (a < 20) {
        cout << "oke bro";
        a += 2;
        cout << a << endl;
    }
    cout << "looping telah selesai" << endl;
    return 0;
}