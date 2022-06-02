#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Node
{
    char data[10];
    Node *next;
} * head, *tail;

void addFirst(Node *temp, char data[20])
{
    temp = new Node;
    strcpy(temp->data, data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        tail = head;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void printData()
{
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data;
        if (cur->next == NULL)
        {
            break;
        }
        cout << " -> ";
        cur = cur->next;
    }
    cout << endl;
}

int main()
{
    Node *temp;

    char data[20];
    int option;
    do
    {
        cout << "Lanjutkan input data: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Masukan data :";
            cin >> data;
            addFirst(temp, data);
            break;
        case 2:
            printData();
            break;
        default:
            break;
        }
    } while (option < 3);

    return 0;
}