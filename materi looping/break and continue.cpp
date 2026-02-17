#include <iostream>
using namespace std;
int main () {
    //for (int i=0; i <= 10; i++) {
       // if (i==3) {
            //continue;
      //  }
        //cout << i << endl;
   // }
   // int i = 10;
   // while (i < 20) {
          //  i++;
      //  if ( i == 14) {
         //   continue;
            // break;
      //  }
     //   cout << i << endl;
   // }

    int i = 10;
    do {
        i++;
        if (i == 13) {
            continue;
        }
        cout << i << endl;
    } while ( i < 20);

    cout << "looping selesai" << endl;
    return 0;
}