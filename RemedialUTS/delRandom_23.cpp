#include <iostream>
using namespace std;

struct Queue
{
    int data[5] = {1, 3, 5, 6, 7};
} tumpuk;

int top = 4, head = 0;

int findPosition(int find)
{
    int nomor = 0;
    for (int i = head; i < top; i++)
    {
        if (find == tumpuk.data[i])
        {
            return nomor;
            break;
        }
        nomor++;
    }
}

void delRandomQueue(int posisi)
{
    for (int i = posisi; i < top; i++)
    {
        tumpuk.data[i] = tumpuk.data[i + 1];
    }
    top--;
}

void print()
{
    for (int i = head; i <= top; i++)
    {
        cout << tumpuk.data[i];
        if (i == top)
        {
            break;
        }
        cout << " -> ";
    }
}

int main()
{
    print();
    int nomor;
    cout << "\nNomor yang ingin dihapus: ";
    cin >> nomor;
    int hasil = findPosition(nomor);
    delRandomQueue(hasil);
    print();

    return 0;
}