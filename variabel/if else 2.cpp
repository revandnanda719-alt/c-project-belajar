#include <iostream>
using namespace std;
int main () {
    int character,jalan;
    cout << "silahkan bisa memainkan character game sesuka hati dengan keyboard w a s d" << endl;
    cin >> character;

    //program game
    if (character == 1) {
        cout <<  "maka pemain berjalan ke depan" << endl;
    } else if ( character == 2) {
        cout << " berjalan ke samping kanan" << endl;
    } else if (character == 3)  {
        cout << "berjalan ke belakang"     << endl;
    } else if (character == 4)  {
        cout << "berjalan ke samping kiri" << endl;
    } else {
        cout << "anda salah menginput apapun" << endl;
    }
    return 0;
}