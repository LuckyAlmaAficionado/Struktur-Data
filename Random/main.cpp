#include<iostream>
#include<cstdlib> // random contain
using namespace std;

// Random function : rand() % random_value
// Example : rand() % 6
// Forever in love kennedy G

int main(){

    for (int i = 0; i < 10; i++)
    {
        cout << rand() % 6 << endl;
    }
    return 0;
}