#include <iostream>
using namespace std;

double volume_balok( double p = 8 ,double l = 5, double t = 2);

int main () {
    cout << "volume_balok :"<< volume_balok(3,4,5)<<endl;
    cout << "volume_balok :"<< volume_balok(3,4)<<endl;
    cout << "volume_balok :"<< volume_balok(3)<<endl;
    cout << "volume_balok :"<< volume_balok()<<endl;
    return 0;
}
//ini argumentnya atau nilai standarnya
double volume_balok(double p,double l,double t) {
    return p*l*t;
}