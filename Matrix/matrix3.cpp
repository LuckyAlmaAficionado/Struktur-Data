#include<iostream>
using namespace std;

int main(){
    // baris kebawah
    int baris = 3;
    // kolom kesamping 
    int kolom = 3;
    // membuat array
    int arr[baris][kolom];
    // membuat hasil
    int A1, A2, A3, hasil;

    system("cls");
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukan kolom ke [" << j << "] : ";
            cin >> arr[i][j];
        }
    }


    // looping output matrix
    for (int i = 0; i < baris; i++)
    {
        cout << "[ ";
        for (int j = 0; j < kolom; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "]";
        cout << endl;
    }

    // [0][0] [0][1] [0][2]
    // [1][0] [1][1] [1][2]
    // [2][0] [2][1] [2][2]

    
    A1 = ((arr[1][1] * arr[2][2]) - (arr[1][2] * arr[2][1])) * (arr[0][0]);
    A2 = ((arr[1][0] * arr[2][2]) - (arr[1][2] * arr[2][0])) * (-arr[0][1]);
    A3 = ((arr[1][0] * arr[2][1]) - (arr[1][1] * arr[2][0])) * (arr[0][2]);

    cout << "Hasil Minar of A1 : " << A1 << endl;
    cout << "Hasil Minar of A2 : " << A2 << endl;
    cout << "Hasil Minar of A3 : " << A3 << endl;

    hasil = A1 + A2 + A3;

    cout << "Jadi hasil dari itu adalah : " << hasil << endl;

    return 0;
}