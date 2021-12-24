#include<iostream>
using namespace std;

typedef struct main1
{
    string nama;
    int id;
}mahasiswa1;


int main(){
    typedef mahasiswa1 mhs[2];
    mhs kartu;

    for (int i = 0; i < 2; i++)
    {
        cin >> kartu[i].nama;
    }

    for (int i = 0; i < 2; i++)
    {
        cout << kartu[i].nama << endl;
    }
    



    return 0;
}