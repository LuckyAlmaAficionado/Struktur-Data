#include <iostream>
using namespace std;

double persegi(double p, double l);

int main()
{
    int panjang, lebar;
    cin >> panjang;
    cin >> lebar;
    cout << persegi(panjang, lebar);

    return 0;
}

double persegi(double p, double l)
{
    return p * l;
}