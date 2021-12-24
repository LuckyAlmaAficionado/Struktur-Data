// function ToNegative(a : integer) -> integer
// {fungsi untuk mengubah bilangan positive menjadi negative}

// hasil <- integer
// hasil <- a * -1
// return hasil
// {end function}

// {algoritma utama}
// 	A <- integer
// hasil <- integer
// if (a > 0)
//  {
//  hasil <- ToNegative(a);
//  output(hasil);
//  }
// else
//  {
//     output("Bilangan sudah negatif");
//  }
// {end algoritma utama}

#include <iostream>
using namespace std;

int ToNegative(int a)
{
    int hasil;
    hasil = a * -1;
    return hasil;
}

int main()
{
    int a = -10;
    if (a > 0)
    {
        int hasil;
        hasil = ToNegative(a);
        cout << hasil << endl;
    }
    else
    {
        cout << "Bilangan sudah negatif" << endl;
    }
}