#include <iostream>
using namespace std;

int a[10] = {12, 43, 67, 80, 65, 35, 78, 23, 80, 23};

int main()
{
    int search;
    cout << "Masukan nomor yang ingin dicari: ";
    cin >> search;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == search)
        {
            cout << a[i] << " Ditemukan pada index " << i << endl;
        }
    }
}