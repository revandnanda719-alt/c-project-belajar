#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
     srand(time(0));
    do {
       char lanjut;
        cout << "mau lempar dadu? y/n :" ;
        cin >> lanjut;
        if (lanjut == 'y') {
            cout << 1 + (rand() %6) << endl;
        } else if ( lanjut == 'n') {
            break;
        } else {
            cout << "ketik y/n dong kakak manis" << endl;
        }
    } while (true);
    cout << "random dadu selesai" << endl;
    return 0;
}