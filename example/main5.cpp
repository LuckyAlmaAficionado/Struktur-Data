#include<iostream>
using namespace std;

void FPB(int a){
    if(a%2==0){
        a /= 2;
        cout << a << endl;
        FPB(a);
    } 
    else if (a > 0){
        if (a < 0)
        {
           exit;
        }
        a/=3;
        cout << a << endl;
        FPB(a);
    }
}

int main()
{
    int value;
    cout << "Masukan value ";
    cin >> value;
    FPB(value);

    return 0;
}
