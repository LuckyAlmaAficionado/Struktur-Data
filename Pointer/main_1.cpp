#include<iostream>
using namespace std;

int main(){
    int angka[200], jumlah, *ptr;
    ptr = angka;

    // Input jumlah looping
    cout << "Masukan jumlah yang Anda inginkan : ";
    cin >> jumlah;
    // looping input
    for (int i = 0; i < jumlah; i++)
    {
        cin >> angka[i];
    }
    // looping print Address and value
    for (int i = 0; i < jumlah; i++)
    {
        cout << "Value : " << angka[i] << " dengan alamat memori: " << &ptr[i] << endl;
    }
    return 0;
}