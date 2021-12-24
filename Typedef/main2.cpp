#include<iostream>
using namespace std;

typedef struct mahasiswa
{
    string nama[2];
    int id[2];
}temp;

int main(){
    temp main;

    for (int i = 0; i < 2; i++)
    {
        cin >> main.nama[i];
    }

    for (int i = 0; i < 2; i++)
    {
        cout << main.nama[i] << endl;
    }
    


    return 0;
}
