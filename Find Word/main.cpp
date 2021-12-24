#include<iostream>
using namespace std;

int main(){
    string vocal = {"aiueo"};
    string kalimat, temp_vokal[5], temp_konsonan[5];
    int a, b, j;
    bool x = false;
    a = b = j = 0;

    system("cls");
    cout << "Masukan kalimat : ";
    cin >> kalimat;

    for (int i = 0; i < kalimat.size(); i++)
    {
        for (int j = 0; j < vocal.size(); j++)
        {
            if(kalimat[i]==vocal[j])
            {
                temp_vokal[a]=kalimat[i];
                a++;
            }
        }
    }

    
    for (string a:temp_vokal)
    {
        cout << a << " ";
    }

    // for (string a:temp_vokal)
    // {
    //     cout << a << " ";
    // }


    return 0;
}