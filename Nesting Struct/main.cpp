#include<iostream>
using namespace std;

struct aktor
{
    string nama;
    int tahun_lahir;
};

struct film
{
    string judul;
    string genre;
    int tahun;
    // struct aktor
    aktor pemeran_1;
    aktor pemeran_2;
};

int main()
{
    aktor aktor1, aktor2;
    film film1, film2;

    // buat aktor 1
    aktor1.nama = "Lucky Alma";
    aktor1.tahun_lahir = 2002;

    // buat aktor 2
    aktor2.nama = "Aficionado Rigel";
    aktor2.tahun_lahir = 2003;

    // buat film
    film1.judul = "Pengabdi Setan";
    film1.genre = "Komedi";
    film1.tahun = 2016;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    film2.judul = "Dilan 2000";
    film2.genre = "Romantis";
    film2.tahun = 2016;
    film2.pemeran_1 = aktor1;
    film2.pemeran_2 = aktor2;

    cout << film1.judul << endl;
    cout << film1.genre << endl;
    cout << film1.pemeran_1.nama << endl;
    cout << film1.pemeran_2.nama << endl;
    cout << endl;

    cout << film2.judul << endl;
    cout << film2.genre << endl;
    cout << film2.pemeran_1.nama << endl;
    cout << film2.pemeran_2.nama << endl;

    return 0;
}
