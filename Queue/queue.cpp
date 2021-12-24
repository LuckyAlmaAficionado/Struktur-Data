#include <iostream>
using namespace std;

struct queue
{
    int data[5] = {1, 2, 3, 4, 5};
} queue;

int top = 4;
int head = 0;

void printData()
{
    for (int i = head; i <= top; i++)
    {
        cout << queue.data[i];
        if (i == top)
        {
            break;
        }
        cout << " -> ";
    }
}

void deQueueMiddle(int posisi)
{
    for (int i = posisi; i <= top; i++)
    {
        queue.data[i] = queue.data[i + 1];
    }
    top--;
}

int main()
{
    deQueueMiddle(2);
    printData();
    return 0;
}