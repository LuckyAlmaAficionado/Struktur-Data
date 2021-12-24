#include<iostream>
using namespace std;

int main(){
    int Arr[10] = {1,2,3,4,5,6,7,8,9,0}, value;
    string next;

    // Address before pointer 
    for(int nilai:Arr)
    {
        cout << "Address : " << &nilai << ", Nilai nya : " << nilai << endl;
        nilai = 1;
    }

    cout << endl << endl;
    
    // Memanipulasi array menggunakan referensi
    for(int &nilaiRef:Arr)
    {
        nilaiRef *= 2;
    }

    for (int &nilaiRef:Arr)
    {
        cout << "Address : " << &nilaiRef << ", Nilai nya : " << nilaiRef << endl;
    }

    return 0;
}