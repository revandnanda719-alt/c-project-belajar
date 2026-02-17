#include <iostream>
#include <array>
using namespace std;

int main () {

    array<int,11>nilai;
    cout << "program menampilkan grafik nilai" << endl;

    for(int i = 0; i < nilai.size(); i++) {
        cout << "jumlah mahasiswa dengan nilai  :" << endl;
        if (i == 0) {
            cout << "0-9:" ;
        } else if ( i == 10 ) {
            cout << "100:" ;
        }
        else {
            cout << i*10 << "-"<< (i*10) + 9 << ":";
        }
        cin >> nilai[i];
    }

    cout << endl;
    cout << "grafik nilai" << endl << endl;

    for(int i = 0; i < nilai.size(); i++) {
        if (i == 0) {
            cout << "0-9 " ;
        } else if ( i == 10 ) {
            cout << "100:" ;
        }
        else {
            cout << i*10 << "-" <<  (i*10) + 9 << ":";
        }
         for (int bintang = 0; bintang < nilai[i]; bintang++) {
            cout << "*" ;
         }

        cout << endl;
    }
    return 0;
}