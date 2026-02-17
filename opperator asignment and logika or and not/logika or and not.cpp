 #include <iostream>
 using namespace std;

  int main (){
    int a = 9;
    int b = 4;
    //not hasilnya false atau 0
     bool c = !(a == 9);
        cout << c << endl;
    // and kedua nilai harus benar hasilnya bener jika salah satu nilai tidak benar maka hasilnya 0 atau false
      bool k = (a == 9 && b == 4);
    cout <<  k << endl;
    bool  m = (a == 7 && b == 4);
         cout << m << endl;
         //or salah satu nilai benar hasilnya true atau 1
    bool j = (a == 9 || b == 5);
    cout << j << endl;
    return 0;
  }