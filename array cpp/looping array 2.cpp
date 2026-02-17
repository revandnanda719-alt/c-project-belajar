#include <iostream>
#include <array>
using namespace std;
// array standar

int main() {

    // looping untuk array c++11 ke atas

    /*
      for(declarasi variabel : array ) {
        statement
      }

    */

    array <int,10 > arrayNilai = {0,1,2,3,4,5,6,7,8,9};

    for ( int nilai : arrayNilai) {
        cout << "addres " << &nilai << "nilainya :" << nilai << endl;
        nilai = 1; //tidak mengubah nilai array
      }

      cout << endl;
      // memanipulasi array dengan menggunakan reference

      for (int &nilaiRef : arrayNilai ) {
        nilaiRef *= 2;
      }

      cout << endl;

      for (int &nilaiRef : arrayNilai) {
        cout << "addres" << &nilaiRef << "nilainya" << nilaiRef << endl;
      }

      std::cin.get();
    return 0;
}