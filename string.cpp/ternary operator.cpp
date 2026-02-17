#include <iostream>
#include <string>


int main () {

int x,y;

std::string output1,output2,output;

output1 = "Eve";
output2 = "aerith";

x = 10;
std::cout << "masukan angka ?" << std::endl;

std::cin >> y;

//output = (x < y) ? output 1 : output 2;

if ( x < y ) {
    output = output1;
} else {
    output = output2;
}

std::cout << output << std::endl;

std::cin.get();
return 0;
}