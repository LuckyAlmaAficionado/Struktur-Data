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
    else
    {
        cout << "Syarat m >= n" << endl;
    }
    return 0;
}

int combinationLinier(int m, int n)
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
            if (n < 5)
            {
                break;
            }
        }
    }
    return b;
}

int main(int argc, char const *argv[])
{
    int r, m, n, option;

    cout << "Input m : ";
    cin >> m;
    cout << "Input n : ";
    cin >> n;
    cout << "Rumus yang anda ingin gunakan : ";
    cin >> option;

    switch (option)
    {
    case 1:
        prodecedureEuclidean(m, n);
        break;

    case 2:
        int hasil = combinationLinier(m, n);
        cout << "Jadi " << hasil << " merupakan kombinasi linier dari " << m << " dan " << n << endl;
        break;
    }

    return 0;
}