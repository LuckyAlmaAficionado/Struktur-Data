#include <iostream>
using namespace std;

struct STACK
{
    int data[10];
    int head, tail;
} * tumpuk;

// void setAwal(){
//     tumpuk->head = 0;
//     tumpuk->tail = 0;
// }

bool isEmpty()
{
    if (tumpuk->head == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool isFull()
{
    if (tumpuk->tail == 9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(int *input)
{
    if (isEmpty() == 1)
    {
        tumpuk->tail++;
        tumpuk->head++;
        tumpuk->data[tumpuk->tail] = *input;
    }
    else
    {
        tumpuk->tail++;
        tumpuk->data[tumpuk->tail] = *input;
    }
}

void dequeue()
{
    for (int i = 1; i <= tumpuk->tail; i++)
    {
        tumpuk->head = tumpuk->data[i];
    }
}

void cetak()
{
    cout << "Data: " << endl;
    for (int i = 0; i <= tumpuk->tail; i++)
    {
        cout << tumpuk->data[i] << " ";
    }
    cout << endl;
}

int main()
{
    int pilih, input;
    // setAwal();
    do
    {
        cout << "1. enqueue data" << endl;
        cout << "2. dequeue data" << endl;
        cout << "3. cetak" << endl;
        cout << "4. clear data" << endl;
        cout << "5. exit" << endl;
        cout << "Pilih : " << endl;
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            if (isFull() == 1)
            {
                cout << "Tumpukan Penuh" << endl;
            }
            else
            {
                cout << "Input data yang di enqueue: " << endl;
                cin >> input;
                enqueue(&input);
            }
            break;
        case 2:
            if (isEmpty() == 1)
            {
                cout << "Tumpukan Kosong" << endl;
            }
            else
            {
                cout << "Data yang di dequeue " << endl;
                dequeue();
            }
            break;
        case 3:
            if (isEmpty() == 1)
            {
                cout << "Tumpukan Kosong" << endl;
            }
            else
            {
                cout << "Data : " << endl;
                cetak();
            }
            break;
        case 4:
            // setAwal();
            break;
        }
    } while (pilih >= 1 && pilih <= 4);
    return 0;
}