#include <iostream>
#include <string>

    using namespace std;

    struct  karakter {
    string nama;
    string hobby;
    string kebiasaan;
    string skill;
    int tanggal_lahir;
    int umur;
};

    struct  game {
    string judul;
    string genre;
    int tahun;
    karakter karakterutama;
    karakter karakterpendukung;
    karakter karakternpc;
};



int main () {

    karakter karakterutama,karakterpendukung,karakternpc;
    game game1,game2;

    //untuk karakter utama
    karakterutama.nama = " Dr.nimdok";
    karakterutama.hobby = "suka eksperiment biology";
    karakterutama.kebiasaan = "penasaran akan hal baru";
    karakterutama.skill = "ilmuwan,jenius iT, engineering chemistry,matematikawan";
    karakterutama.tanggal_lahir = 1990;
    karakterutama.umur = 50;


    //untuk karakter pendukung
    karakterpendukung.nama = "isacc newton";
    karakterpendukung.hobby = "penasaran terhadap fisika dan suka membaca buku";
    karakterpendukung.kebiasaan = "suka tidur sampai jam 3 pagi demi memecahkan teori relativitas";
    karakterpendukung.skill = "leadership,mechanical engineering,fisikawan,ilmuwan,";
    karakterpendukung.tanggal_lahir = 1995;
    karakterpendukung.umur = 32;

    //karakter npc
    karakternpc.nama = "bobby";
    karakternpc.hobby = "suka bersepeda";
    karakternpc.kebiasaan = "suka memesan coffe americano";
    karakternpc.skill = "traders,negotiator";
    karakternpc.tanggal_lahir = 2001;
    karakternpc.umur = 25;


    //buat game
    game1.judul = "time detective";
    game1.genre = "sci-fi,fantasy,open world,medieval";
    game1.tahun = 2025;
    game1.karakterutama = karakterutama;
    game1.karakterpendukung = karakterpendukung;
    game1.karakternpc   = karakternpc;

    game2.judul = "staler blade";
    game2.genre = "sci-fi,fantasy,open world,medieval";
    game2.tahun = 2025;
    game2.karakterutama = karakterutama;
    game2.karakterpendukung = karakterpendukung;
    game2.karakternpc   = karakternpc;


    cout << game1.karakterutama.nama << endl;
    cout << game1.karakterutama.hobby << endl;
    cout << game1.karakterutama.kebiasaan << endl;
    cout << game1.karakterutama.skill << endl;
    cout << game1.karakterutama.tanggal_lahir << endl;
    cout << game1.karakterutama.umur << endl;

    cout << endl;

    cout << game1.karakterpendukung.nama << endl;
    cout << game1.karakterpendukung.hobby << endl;
    cout << game1.karakterpendukung.kebiasaan << endl;
    cout << game1.karakterpendukung.skill << endl;
    cout << game1.karakterpendukung.umur << endl;
    cout << game1.karakterpendukung.tanggal_lahir << endl;

    cout << endl;

    cout << game1.karakternpc.nama << endl;
    cout << game1.karakternpc.hobby << endl;
    cout << game1.karakternpc.kebiasaan << endl;
    cout << game1.karakternpc.skill << endl;
    cout << game1.karakternpc.umur << endl;
    cout << game1.karakternpc.tanggal_lahir << endl;

    cout << game2.karakterutama.nama << endl;
    cout << game2.karakterutama.hobby << endl;
    cout << game2.karakterutama.umur << endl;
    

    cin.get();
    return 0;
}