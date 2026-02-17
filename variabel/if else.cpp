#include <iostream>
using namespace std;

    int main(){
        int a;
        cout << "nilai yang anda masukan" << endl;
        cin >> a;
        //cout << "ini adalah nilai yang anda masukan" << endl;
        if (a== 4){
            cout << "jam 4 pagi bro bangun" << endl; 
        } else if ( a == 6) {
                cout << "jam 6 pagi bro bangun" << endl;
            } else if (a == 5) {
                cout << "bro ini udah jam 5 pagi bangun bro"<< endl;
         } else {
            cout << "kepagian bangun lo bro"<< endl;
         }
        return 0;
    }