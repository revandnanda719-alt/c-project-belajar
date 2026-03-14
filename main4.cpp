#include <iostream>
#include "library.h"

using namespace std;

int main() {

    character karakterutama,karakternpc;

    karakterutama.no = 1;
    karakterutama.nama = "ANGEL";
    karakterutama.kekuatan = "healing";
    karakterutama.pribadi = "introvert";

    karakternpc.no = 2;
    karakternpc.nama = "BRIAN";
    karakternpc.kekuatan = "assasin";
    karakternpc.pribadi = "extrovert";



    cout << "ini adalah biodata karakter utama:" << endl;

    cout << karakterutama.no << endl;
    cout << karakterutama.nama << endl;
    cout << karakterutama.kekuatan << endl;
    cout << karakterutama.pribadi << endl;

    cout << "ini adalah biodata karakter npc : " << endl;

    cout << karakternpc.no << endl;
    cout << karakternpc.nama << endl;
    cout << karakternpc.kekuatan << endl;
    cout << karakternpc.pribadi << endl;

    cin.get();
    return 0;
}