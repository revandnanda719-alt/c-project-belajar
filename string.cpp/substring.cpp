#include <iostream>
#include <string>


int main () {

    std::string kalimat_1("saya suka bermain komputer");
    std::string kalimat_2("si nanda suka bermain arduino dan coding");

    std::cout << "kalimat ke 1 :" << kalimat_1 << std::endl;
    std::cout << "kalimat ke 2 : " << kalimat_2 << std::endl;
    
    //substring,mengambil string di tengah tengah
    //mengambil index string dan panjang string
    std::cout << kalimat_1.substr(10,7) << std::endl;
    std::cout << kalimat_2.substr(22,7) << std::endl;

    //mencari posisi substring
    std::cout << kalimat_1.find("bermain") << std::endl;
    std::cout << kalimat_2.find("arduino") << std::endl;

    int a = kalimat_1.find("a");
    std::cout << a << std::endl;
    std::cout << kalimat_1.find("a", a + 1) << std::endl;

    //mencari posisinya dari belakang rfind 

    std::cout << kalimat_2.rfind("cod") << std::endl;

    std::cin.get();
    return 0;
}