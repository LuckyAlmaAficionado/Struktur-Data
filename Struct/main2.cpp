#include<iostream>
using namespace std;

typedef struct mahasiswa
{
    string nama;
    string NIM;
    string jurusan;
    int tahun_lulus;
}emp;

int main(){
    int banyak;
    cout << "Input banyak mahasiswa : ";
    cin >> banyak;
    emp mhs[banyak];
    
    cout <<  endl;
    for (int i = 0; i < banyak; i++)
    {
        cout << "======== INPUT DATA MAHASISWA KE-"<< i+1 << " ========"<< endl;
        cout << "Masukan nama mahasiswa ke-" << i+1 << " : ";
        cin >> mhs[i].nama;
        cout << "Masukan Nim mahasiswa ke-" << i+1 << " : ";
        cin >> mhs[i].NIM;
        cout << "Masukan jurusan mahasiswa ke-" << i+1 << " : ";
        cin >> mhs[i].jurusan;
        cout << "Masukan tahun lulus mahasiswa ke-" << i+1 << " : ";
        cin >> mhs[i].tahun_lulus;
        cout << endl << endl;
    }

    system("cls");
    cout << endl << endl;
    for (int i = 0; i < banyak; i++)
    {
        cout << "======== DATA MAHASISWA KE-"<< i+1 << " ========"<< endl;
        cout << "nama mahasiswa : ";
        cout << mhs[i].nama << endl;
        cout << "Nim mahasiswa : ";
        cout << mhs[i].NIM << endl;
        cout << "jurusan mahasiswa : ";
        cout << mhs[i].jurusan << endl;
        cout << "tahun lulus mahasiswa : ";
        cout << mhs[i].tahun_lulus << endl;
        cout << endl << endl;
    }
    return 0;
}