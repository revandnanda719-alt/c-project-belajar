#include <iostream>

#define NO 1

#if NO == 0
    #define CHOICE "EVE" 
#else 
    #define CHOICE "AERITH"
#endif

using namespace std;

int main() {

    cout<< "your character : " << CHOICE << endl;
     
    

    cin.get();
    return 0;
}