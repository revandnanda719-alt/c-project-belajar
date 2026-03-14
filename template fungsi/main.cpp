#include <iostream>
#include <string>

using namespace std;


template <typename E> 
    void print(E data) {
        cout << data << endl;
    }

template <typename E> 
    int toInt(E data) {
        return int(data);
    }

template <typename E, typename X> 
    E max(E a, X b) {
        return (a > b) ? a : b;
    }


int main() {

    print(10);
    print(3.14);
    print<string>("hallo dunia");
    print(1000.456);


    cout << toInt(10.5454454) << endl;
    cout << max(12.45, 156) << endl;

    print<double>(22.7);
    cout << max<double,int>(11.1,12) << endl;
    cin.get();
    return 0;
}