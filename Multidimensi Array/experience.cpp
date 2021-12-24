// #include<iostream>
// using namespace std;

// int main(){
//     int baris = 2, kolom = 2;
//     int ArrayMD[baris][kolom] = {1,2,3,4};

//     for (int i = 0; i < baris; i++)
//     {
//         cout << "[ ";
//         for (int j = 0; j < kolom; j++)
//         {
//             cout << ArrayMD[i][j] << " ";
//         }
//         cout << "]" << endl;
//     }
    
 
//     return 0;
// }
#include <iostream>
// #include <conio.h>
using namespace std;

// int x, y;
int main(){
    int baris = 2;
    int kolom = 2;
    int arrA[baris][kolom] = {3,5,6,7};
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){   
            cout << arrA[i][j] << " ";            
        }
    cout << endl;
    }
    
    return 0;
}