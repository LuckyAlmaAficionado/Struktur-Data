#include<iostream>
using namespace std;

int main(){
    system("cls");
    int Arr[5], size = sizeof(Arr)/sizeof(*Arr);

    cout << sizeof(Arr) << endl;
    cout << sizeof(*Arr) << endl;


    // input array
    for (int i = 0; i < size; i++)
    {
        cout << "Masukan index [" << i << "] : ";
        cin >> Arr[i];
    }
    cout << endl;
    // show array
    for(int a : Arr){
        cout << a << endl;
    }
    cout << endl;
    // change index array
    cout << "Ubah index [2] : ";
    cin >> Arr[2];
    cout << "Ubah index [3] : ";
    cin >> Arr[3];
    cout << endl;
    // show array
    for(int a : Arr){
        cout << a << endl;
    }

    

    return 0;
}