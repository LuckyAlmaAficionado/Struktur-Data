#include<iostream>
using namespace std;

typedef struct mahasiswa{
    string nama;
    string nim;
    int angkatan;
}temp;

int main(){
    typedef temp mhs[2];
    mhs kartu, *Ptr_kartu;
    Ptr_kartu = &kartu;

    for (int i = 0; i < 2; i++)
    {
        cout << "=========== INPUT DATA MAHASISWA KE-" << i+1 << "===========" << endl;
        cout << "masukan nama mahasiswa : ";
        cin >> kartu[i].nama;
        // cout << "masukan nim mahasiswa : ";
        // cin >> kartu[i].nim;
        // cout << "masukan angkatan mahasiswa : ";
        // cin >> kartu[i].angkatan;
        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "=========== DATA MAHASISWA KE-" << i+1 << "===========" << endl;
        cout << "Nama mahasiswa : " << kartu[i].nama << endl;
        cout << "Address Nama mahasiswa : " << &kartu[i].nama << endl;
        // cout << "Nim mahasiswa : " << kartu[i].nim << endl;
        // cout << "Address Nim mahasiswa : " << &kartu[i].nim << endl;
        // cout << "Angkatan mahasiswa : " << kartu[i].angkatan << endl;
        // cout << "Addrress Angkatan mahasiswa : " << &kartu[i].angkatan << endl;
        cout <<  endl;
    }

    for (int i = 0; i < 1; i++)
    {
        cout << "=========== INPUT DATA MAHASISWA KE-" << i+1 << "===========" << endl;
        cout << "masukan nama mahasiswa : ";
        cin >> Ptr_kartu[i]->nama;
        // cout << "masukan nama mahasiswa : ";
        // cin >> Ptr_kartu[1]->nama;
        // cout << "masukan nim mahasiswa : ";
        // cin >> Ptr_kartu[i]->nim;
        // cout << "masukan angkatan mahasiswa : ";
        // cin >> Ptr_kartu[i]->angkatan;
        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "=========== DATA MAHASISWA KE-" << i+1 << "===========" << endl;
        cout << "Nama mahasiswa : " << Ptr_kartu[i]->nama << endl;
        cout << "Address Nama mahasiswa : " << &Ptr_kartu[i]->nama << endl;
        // cout << "Nim mahasiswa : " << Ptr_kartu[i]->nim << endl;
        // cout << "Address Nim mahasiswa : " << &Ptr_kartu[i]->nim << endl;
        // cout << "Angkatan mahasiswa : " << Ptr_kartu[i]->angkatan << endl;
        // cout << "Addrress Angkatan mahasiswa : " << &Ptr_kartu[i]->angkatan << endl;
        cout <<  endl;
    }



    return 0;
}
