#include <iostream>
using namespace std;

struct LinkedList
{
    int data;
    LinkedList *next;

} * head, *tail, *cur, *newNode, *before, *del;

int count()
{
    int number = 0;
    cur = head;
    while (cur != NULL)
    {
        number++;
    }
    return number;
}

void createSingleLinkedList(int data)
{
    head = new LinkedList();
    head->data = data;
    head->next = NULL;
    tail = head;
}

void addFirst(int data)
{
    newNode = new LinkedList();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void addLast(int data)
{
    newNode = new LinkedList();
    newNode->data = data;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void edtFirst(int data)
{
    head->data = data;
}

void edtLast(int data)
{
    tail->data = data;
}

void edtMiddle(int data, int posisi)
{
    cur = head;
    int number = 1;
    while (cur != NULL)
    {
        if (posisi == number)
        {
            cur->data = data;
        }
        number++;
        cur = cur->next;
    }
}

void delFirst()
{
    del = head;
    head = head->next;
    delete del;
}

void delLast()
{
    del = tail;
    cur = head;
    while (cur->next != NULL)
    {
        if (cur->next == tail)
        {
            cur = del;
        }
        cur = cur->next;
    }
    delete del;
}

void delMiddle(int posisi)
{
    cur = head;
    int number = 1;
    while (number <= posisi)
    {
        if (number == posisi - 1)
        {
            before = cur;
        }
        if (number == posisi)
        {
            del = cur;
        }
        number++;
        cur = cur->next;
    }
    before->next = cur;
    delete del;
}

void printLinkedList()
{
    cur = head;
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
    int option, data, posisi;
    system("cls");
    do
    {
        cout << "1. Create LinkedList" << endl;
        cout << "2. Add First LinkedList" << endl;
        cout << "3. Add Last LinkedList" << endl;
        cout << "4. Edit First LinkedList" << endl;
        cout << "5. Edit Last LinkedList" << endl;
        cout << "6. Edit Middle LinkedList" << endl;
        cout << "7. Delete First LinkedList" << endl;
        cout << "8. Delete Last LinkedList" << endl;
        cout << "9. Delete Middle LinkedList" << endl;
        cout << "10. Exit" << endl;
        cout << "Masukan Opsi Pilihan: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Masukan data LinkedList: ";
            cin >> data;
            createSingleLinkedList(data);
            break;
        case 2:
            cout << "Masukan data depan LinkedList: ";
            cin >> data;
            addFirst(data);
            break;
        case 3:
            cout << "Masukan data belakang LinekdList: ";
            cin >> data;
            addLast(data);
            break;
        case 4:
            cout << "Edit data depan LinkedList: ";
            cin >> data;
            edtFirst(data);
            break;
        case 5:
            cout << "Edit data belakang LinkedList: ";
            cin >> data;
            edtLast(data);
            break;
        case 6:
            cout << "Edit data Tengah LinkedList: ";
            cin >> data;
            cout << "Posisi data yang indin diubah: ";
            cin >> posisi;
            edtMiddle(data, posisi);
            break;
        case 7:
            delFirst();
            break;
        case 8:
            delLast();
            break;
        case 9:
            cout << "Posisi data yang ingin dihapus: ";
            cin >> posisi;
            delMiddle(posisi);
            break;
        case 10:
            printLinkedList();
            break;
        }
    } while (option != 0);

    printLinkedList();

    return 0;
}