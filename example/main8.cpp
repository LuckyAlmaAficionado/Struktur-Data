#include<iostream>
using namespace std;


int main(){
    typedef int Larik[2];
    Larik a, b, c;

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    
    for(int x:a)
    {
        cout << x << endl;
    }


    return 0;
}