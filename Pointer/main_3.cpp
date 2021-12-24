#include<iostream>
using namespace std;

int main(){
    int luckyNumber[5]={43,67,32,53,87}, *Ptr;
    Ptr = luckyNumber;

    cout << "Address Array : " << &luckyNumber << endl;
    cout << "Address Index Array : " << &luckyNumber[0] << endl;
    cout << "Address Index Array : " << &luckyNumber[1] << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(luckyNumber + i) << endl;
    }
    cout << endl << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << Ptr[i] << endl;
    }
    

    return 0;
}