#include<iostream>
using namespace std;

struct sepeda
{
    string merk;
    string type;
    int tahun;
    int harga;
};


int main(){
    sepeda s1, s2;

    // Deklarasi Sepeda 1
    s1.merk = "Polygon";
    s1.type = "Sepeda Gunung";
    s1.tahun = 2019;
    s1.harga = 5000000;

    // Deklarasi Sepeda 2
    s2.merk = "Family";
    s2.type = "Sepeda Anak";
    s2.tahun = 2020;
    s2.harga = 1000000;

    // Print dari sepeda 1
    cout << s1.merk << endl;
    cout << s1.type << endl;
    cout << s1.tahun << endl;
    cout << s1.harga << endl;

    cout << endl << endl;
    // Print dari sepeda 2
    cout << s2.merk << endl;
    cout << s2.type << endl;
    cout << s2.tahun << endl;
    cout << s2.harga << endl;

    return 0;
}