#include<iostream>
using namespace std;

void changeData(int *a){

}

int main()
{
    int Arr[10] = {12,45,32,43,16,36,43,56,84,23}, index, value, a;
    string option;

    // System
    system("cls");

    // Data awal
    cout << "===== Data original =====" << endl;
    for (int i = 0; i < sizeof(Arr)/sizeof(*Arr); i++)
    {
        cout << Arr[i] << " Address : " << &Arr[i] << endl;
    }
    
    cout << endl;

    cout << "Change data? ";
    cin >> option;

    if (option=="y" || option=="Y")
    {
        cout << "Masukan index data yang ingin diganti? ";
        cin >> index;
        // int *Ptr = &Arr[index];
        cout << "Masukan value data yang ingin diganti? ";
        cin >> value;
        Arr[index] = value;
    }
    
    cout << "====== DATA POINTER ======" << endl;
    for (int i = 0; i < sizeof(Arr)/sizeof(*Arr); i++)
    {
        cout << Arr[i] << " Address : " << &Arr[i] << endl;
    }

    return 0;
}
