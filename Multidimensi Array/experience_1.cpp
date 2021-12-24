#include<iostream>
using namespace std;

int main(){
    int baris = 3; // baris ke bawah
    int kolom = 5; // kolom ke samping
    int Arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    // [ 1 , 2, 3, 4, 5
    //   6, 7, 8, 9, 10
    //   11, 12, 13, 14, 15]

    for(int a:Arr)
    {
        cout << a*2 << " ";
    }


    return 0;
}