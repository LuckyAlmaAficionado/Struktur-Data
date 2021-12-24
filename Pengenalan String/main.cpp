#include<iostream>
#include<string>
using namespace std;

int main(){
    // char kata[5]={'a','b','c','d','e'};
    // array char tidak bisa kita tambah
    string kata("cat");

    cout << kata << endl;

    string data;
    cout << "masukan kata atau kalimat ";
    cin >> data;
    cout << "data yang dimasukan adalah: ";
    cout << data << endl;

    return 0;
}