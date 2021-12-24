#include <iostream>
using namespace std;

struct Queue
{
    int data[5] = {1, 2, 3, 4, 5};
} queue;

int head = 0, tail = 4;

void enQueue(int data)
{
    tail++;
    queue.data[tail] = data;
}

void deQueue()
{
    cout << queue.data[head] << endl;
    for (int i = 0; i < tail; i++)
    {
        queue.data[i] = queue.data[i + 1];
    }
    tail--;
}

void print()
{
    for (int i = 0; i <= tail; i++)
    {
        cout << queue.data[i];
        if (i == tail)
        {
            break;
        }
        cout << " -> ";
    }
    cout << endl;
    cout << endl;
}

int main()
{
    string option;
    int data;

    cout << "Tampil Antrian:" << endl;
    print();
    do
    {
        cout << "Panggil Antrian [Ya atau Tidak] ? : ";
        cin >> option;
        if (option == "Ya")
        {
            cout << "Antrian Keluar: ";
            deQueue();
            cout << "Antrian Masuk: ";
            cin >> data;
            enQueue(data);
            cout << "Antrian Baru: " << endl;
            print();
        }
        else
        {
            cout << "Antrian Selesai" << endl;
        }

    } while (option == "Ya");

    return 0;
}