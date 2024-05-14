// construktorproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;
public:
    mahasiswa() {
        nim = 0;
        nama = "";
    }
    mahasiswa(int iNim) {
        nim = iNim;
    }
    mahasiswa(string iNama) {
        nim = 0;
        nama = iNama;
    }
    mahasiswa(int iNim, string iNama);
    void cetak();    
};

mahasiswa::mahasiswa(int iNim, string iNama) {
    nim = iNim;
    nama = iNama;
}

void mahasiswa::cetak() {
    cout << endl << "Nim =" << nim << endl;
    cout << " Nama " << nama << endl;
}
    