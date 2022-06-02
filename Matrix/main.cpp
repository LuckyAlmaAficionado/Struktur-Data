#include <iostream>
using namespace std;

int main()
{
    int baris = 2, kolom = 2; // baris ke bawah
    int temp_a, temp_b;       // kolom ke samping
    int Arr[baris][kolom];

    system("cls");
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukan baris [" << i << "] kolom [" << j << "] : ";
            cin >> Arr[i][j];
        }
    }

    // Looping Ouput Matrix
    for (int i = 0; i < baris; i++)
    {
        cout << "[ ";
        for (int j = 0; j < kolom; j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << "]";
        cout << endl;
        /* code */
    }

    cout << endl;
    temp_a = Arr[0][0] * Arr[1][1];
    temp_b = Arr[0][1] * Arr[1][0];
    cout << "Hasil dari matrix adalah : " << temp_a - temp_b << endl;

    return 0;
}