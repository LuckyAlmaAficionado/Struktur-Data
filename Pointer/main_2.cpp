// #include<iostream>
// #include<stdio.h>

// using namespace std;

// struct biodata_mhs
// {
//     char nama[50];
//     char nim[50];
//     char fakultas[50];
//     char prodi[50];
//     int angkatan;
// };

// int main(){
//     biodata_mhs *kartu_mhs, kartu;
//     kartu_mhs = &kartu;

//     // Input Normal
//     cout << "Masukan Biodata Anda: " << endl;
//     cout << "Nama = ";
//     cin >> kartu.nama; 
//     cout << "Nim = ";
//     cin >> kartu.nim; 
//     cout << "Progdi = ";
//     cin >> kartu.prodi; 
//     cout << "Angkatan = ";
//     cin >> kartu.angkatan; 
//     // &kartu
//     cout << "====== BIODATA ======" << endl;
//     cout << "Nama     : " << kartu.nama << endl;
//     cout << "Nim      : " << kartu.nim << endl;
//     cout << "Progdi   : " << kartu.prodi << endl;
//     cout << "Angkatan : " << kartu.angkatan << endl;
//     cout << "====== ADDRESS ======" << endl;
//     cout << "Nama     : " << &kartu.nama << endl;
//     cout << "Nim      : " << &kartu.nim << endl;
//     cout << "Progdi   : " << &kartu.prodi << endl;
//     cout << "Angkatan : " << &kartu.angkatan << endl;
//     cout << endl << endl;
//     // Input Pointer
//     cout << "Masukan Biodata Anda: " << endl;
//     cout << "Nama = ";
//     cin >> kartu_mhs->nama; 
//     cout << "Nim = ";
//     cin >> kartu_mhs->nim; 
//     cout << "Progdi = ";
//     cin >> kartu_mhs->prodi; 
//     cout << "Angkatan = ";
//     cin >> kartu_mhs->angkatan; 
//     // &kartu_mhs
//     cout << "====== BIODATA ======" << endl;
//     cout << "Nama     : " << kartu_mhs->nama << endl;
//     cout << "Nim      : " << kartu_mhs->nim << endl;
//     cout << "Progdi   : " << kartu_mhs->prodi << endl;
//     cout << "Angkatan : " << kartu_mhs->angkatan << endl;
//     cout << "====== ADDRESS ======" << endl;
//     cout << "Nama     : " << &kartu_mhs->nama << endl;
//     cout << "Nim      : " << &kartu_mhs->nim << endl;
//     cout << "Progdi   : " << &kartu_mhs->prodi << endl;
//     cout << "Angkatan : " << &kartu_mhs->angkatan << endl;

//     return 0;
// }