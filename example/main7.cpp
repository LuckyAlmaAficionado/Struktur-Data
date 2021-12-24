#include<iostream>
using namespace std;

typedef struct{
    string nama;
    string nim;
    string jurusan;
    double IPK;
}mhs;


struct Mahasiswa
{
    string nama[2];
    string nim[2];
    string jurusan[2];
    double IPK[2];
};


int main(){
    mhs mahasiswa[3];
    Mahasiswa mahasiswa_1;

    // looping struct typedef
    for (int i = 0; i < 3; i++)
    {
        cout << "Masukan nama mahasiswa : ";
        cin >> mahasiswa[i].nama;
    }

    // looping struct
    for (int i = 0; i < 3; i++)
    {
        cout << "Masukan nama mahasiswa : ";
        cin >> mahasiswa_1.nama[i];
    }
    



    return 0;
}