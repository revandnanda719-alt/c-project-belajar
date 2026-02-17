#include <iostream>
#include <array>

using namespace std;

const int kolom = 3;
const int baris = 2;

void printArray (array < array <int,kolom> , baris> &nilaiArray) {
    for (array <int,kolom> vectorbaris : nilaiArray ) {
        cout << "[" ;
        for (int nilaikolom : vectorbaris) {
            cout << nilaikolom << " ";
        }
        cout << "]" ;
    }
}
int main () {

    array < array <int,kolom> , baris> nilaiMd = {0,1,2,3,4,5};

    printArray(nilaiMd);

    cin.get();
    return 0;
}