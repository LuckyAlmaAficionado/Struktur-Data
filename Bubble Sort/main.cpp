#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int Arr[10]={1,3,5,7,9,0,8,6,4,2}, temp;

    for (int i = 0; i < sizeof(Arr)/sizeof(*Arr); i++)
    {
        for (int j = 0; j < sizeof(Arr)/sizeof(*Arr)-1-i; j++)
        {
            if (Arr[j]>Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    }

    for (int a:Arr)
    {
        cout << a << " ";
    }
    
    

    return 0;
}
