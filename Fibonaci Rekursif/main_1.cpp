#include<iostream>
using namespace std;

int fibonacci(int n);

int main(){
    int angka, hasil;
    cout << "menghitung fibonacci ke : ";
    cin >> angka;
    hasil = fibonacci(angka);

    cout << "Nilainya adalah : ";
    cout << hasil << endl;

    return 0;
}

int fibonacci(int n){
    cout << "fungsi fibonacci  : " << n << endl; 
    if ((n==1)||(n==0))
    {
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}