#include<iostream>
using namespace std;

int main()
{
    system("cls");
    // Deklarasi Array
    string Arr[5] = {"Lucky", "Fitri", "Reza", "Safrizal", "Bima"};

    // Penggantian isi array
    Arr[2] = "Devanda";

    // Output keluar
    for (string a : Arr)
    {
        cout << a << endl;
    }
    
    return 0;
}

// Pertanyaan : Nama siapa yang akan di ubah dan menjadi nama siapa?