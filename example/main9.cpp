#include<iostream>
using namespace std;

void Basic(int a){
    a += 5;
    cout << "Basic : " << a << endl;
    cout << "Address : " << &a << endl << endl;
}

void Pointer(int *a){
    *a += 5;
}

int main(){
    int a = 15;

    Basic(a);
    cout << "Basic : " << a << endl;
    cout << "Address : " << &a << endl << endl;

    Pointer(&a);
    cout << "Pointer : " << a << endl;
    cout << "Address : " << &a << endl << endl;



    return 0;
}