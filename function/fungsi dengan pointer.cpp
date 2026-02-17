#include <iostream>
using namespace std;

void fungsi(int *b);
void kuadrat(int *valptr);

int main () {
    int a = 4;

    cout << "addres dari a :" << &a << endl;
    cout << "nilai dari a :" << a << endl;

    fungsi(&a);

    kuadrat(&a);
    cout << "nilai dari kuadrat a :" << a << endl;
    return 0;
}

void fungsi(int *b) {
    cout << "addres dari b :" << b << endl;
    cout << "nilai dari pointer b :" << *b << endl; //dereferencing

}

void kuadrat(int *valptr) {
    *valptr = *valptr * * valptr;
}