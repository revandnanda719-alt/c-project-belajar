#include <iostream>
using namespace std;
int main () {
    cout << "loop ke 1 " << endl;
    for (int i = 1;   i <= 10;   i++ ) {
        cout << i << endl;
    }
     cout << "loop ke 2" << endl;
     for (int i = 1;  i <= 10; i = i += 3) {
        cout << i << endl;
     } 
      cout << "loop ke 3" << endl;
      for (int i = 1; i >= -10; i--) {
        cout << i << endl;
      } 
      cout << "loop ke 4 " << endl;
      int total =0;
      for (int i = 1; i <= 10; i++) {
            total += i;
            cout << i << "||" << total << endl;
      }
    return 0;
}