#include<iostream>
using namespace std;

int main(){
    int Arr[10] = {90, 45, 34, 23, 43, 56, 23, 34, 65, 46};
    int find, i;

    cin >> find;
    for (i = 1; i < sizeof(Arr)/sizeof(Arr[0]); i++)
    {
        if (Arr[i] == find)
        {
            cout << "Ketemu" << endl;
            cout << "Di index ke-" << i << endl;
            break;
        } 
    } 

    if (Arr[i]!=find)
    {
        cout << "Tidak ketemu" << endl;
    }
    return 0;
}