#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    fstream fileku;
	int hasil;
	fileku.open("data copy.bin", ios::in | ios::binary);

	fileku.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));

	cout << "besar integer = " << sizeof(hasil) << endl;
	cout << hasil << endl;

   
    std::cin.get();
    return 0;
}
