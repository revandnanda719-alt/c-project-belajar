#include <iostream>
using namespace std;
int main () {
    int n;
    
        cout << "masukan panjang segitiga\n" << endl;
        cin >> n;
        cout << "pola ke 1" << endl;
        
        int i = 1;
        int a = 1;
        do {
             i++;
            cout << " * " ;
        } while ( i <= n);
        do {
            a++;
            cout << endl;
        }  while (a >= i );
        return 0;
}