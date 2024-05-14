// constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printAll();

    mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};
