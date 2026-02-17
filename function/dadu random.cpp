#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
    char lanjut;
    while (true) {
        cout << "lempar dadu?  y/n :";
        cin >> lanjut;
        if ( lanjut == 'y') {
            cout << 1 + (rand() % 6) << endl;
        } else if ( lanjut =='n') {
                break;
        } else {
            cout << " ketik y/n dong kakak manis\n" << endl;
        }
    }
    cout << "random dadu " << endl;
    return 0;
}