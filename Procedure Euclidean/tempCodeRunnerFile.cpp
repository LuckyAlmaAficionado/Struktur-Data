#include <iostream>
using namespace std;

int prodecedureEuclidean(int m, int n)
{
    int PPB, a, b;
    if (m >= n)
    {
        while (n != 0)
        {
            a = m / n;
            b = m % n;
            m = n;
            n = b;
            cout << "Hasil dari B adalah : " << b << endl;
        }
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    int r, m, n;

    cout << "Input m : ";
    cin >> m;
    cout << "Input n : ";
    cin >> n;

    prodecedureEuclidean(m, n);

    return 0;
}