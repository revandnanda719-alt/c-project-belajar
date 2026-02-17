#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "masukan panjang segitiga" << endl;
    cin >> n;
    cout << "pola ke 1" << endl;
    for (int i = 1; i <= n; i++) {
        for (int a = 1; a <= i; a++) {
            cout << "#" ;
        }
        cout << endl;
    }
        cout << "pola ke 2" << endl;

    for  (int i = 1; i<=n; i++) {
        for (int a = n; a>=i; a--) {
            cout << "*" ;
        }
        cout << endl;
    }
        cout << "pola ke 3" << endl;

    for ( int i= 1; i<=n; i++) {
        for (int b= 1; b < i; b++  ) {
            cout << " " ;
        }
        for ( int a = n; a>= i; a--) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "pola ke 4" << endl;
    
    for (int j = 1; j<=n; j++) {
        for (int k= n; k > j; k--) {
             cout << " " ;
        }
       for (int h = 1; h<= j; h++) {
             cout << "*" ;
       }
       cout << endl;
    }
    cout << "pola ke 5" << endl;
    for (int v = 1; v <=n; v++) {
        for (int x= n; x > v; x--) {
            cout << " " ;
        }
        for (int g= 1; g <= (2*v-1); g++) {
            cout << "*"  ;
        }
        cout << endl;
    }
    cout << "pola ke 6 " << endl;
   for ( int i= 1; i<=n; i++) {
        for (int b= 1; b < i; b++  ) {
            cout << " " ;
        }
        for ( int a = n; a>= (2*i-n); a--) {
            cout << "*";
        }
        cout << endl;
   }
   cout << "pola ke 7 " << endl;
    for (int v = 1; v <=n; v++) {
        for (int x= n; x > v; x--) {
            cout << " " ;
        }
        for (int g= 1; g <= (2*v-1); g++) {
            cout << "*"  ;
        }
        cout << endl;
    }
   for ( int i= 2; i<=n; i++) {
        for (int b= 1; b < i; b++  ) {
            cout << " " ;
        }
        for ( int a = n; a>= (2*i-n); a--) {
            cout << "*";
        }
        cout << endl;
   }
    return 0;
}