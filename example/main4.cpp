#include <iostream>
using namespace std;

int banyak(int n){
    int temp, nilaiMhs;
    for(int i = 0; i < n; i++){
        cout << "Masukkan nilai : ";
        cin >> nilaiMhs;
        temp += nilaiMhs;
        }
    return temp;
    }

int Average(int n){
    return banyak(n)/n;
}


int main(){
    int n = 2;
    int dataMhs;
    // int hasil = dataMhs.banyak(n);
    int hasil2 = Average(n);
    cout << endl;
    // cout << "Nilai         : " << hasil << endl;
    cout << "Nilai         : " << hasil2 << endl;
}