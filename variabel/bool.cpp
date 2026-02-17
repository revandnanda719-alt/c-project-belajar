#include <iostream>
    using namespace std;

     int main (){
        int a = 8;
        int b = 9;
        //sama dengan  
        bool samadengan = (a==b);
        cout << samadengan << endl;
        //tidak sama dengan
        bool tidaksamadengan (a!=b);
        cout << tidaksamadengan << endl;
        // kurang dari
        bool kurangdari (a<b);
        cout << kurangdari << endl;
        //lebih dari
        bool lebihdari (a>b);
        cout << lebihdari << endl;
        //kurang samadengan
        bool kurangsamadengan (a<=b);
        cout << kurangsamadengan << endl;
        //lebih samadengan
        bool lebihsamadengan (a>=b);
        cout << lebihsamadengan << endl;
        return 0;
     }