#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

const size_t arraySize = 10;

void printArray(array <int, arraySize> &angka){
    cout << "Array : ";
    for (int &a : angka)
    {
        cout << a << " ";
    }
    cout << endl;
}

int main(){
    array<int, arraySize> angka = {1,3,5,7,9,0,8,6,4,2};   
    printArray(angka);

    int angkaCari;
    bool ketemu;
    // sort first
    // search -> binary_search
    cout << "mencari angka dalam array diatas: \n";
    cin >> angkaCari;
    sort(angka.begin(), angka.end());
    ketemu = binary_search(angka.begin(), angka.end(), angkaCari);

    if (ketemu)
    {
        cout << "Ketemu" << endl;
    } else {
        cout << "Tidak ketemu" << endl;
    }
    

    cout << ketemu << endl;
    return 0;
}