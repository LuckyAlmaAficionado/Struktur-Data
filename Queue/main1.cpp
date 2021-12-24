#include<iostream>
using namespace std;

struct STACK
{
    int data[5];
    int top, tail;
}stack;

void inisialisasi()
{
    stack.top = -1;
    stack.tail = -1;
}

bool isEmpty()
{
    if(stack.top == -1){
        return 1;
    } else {
        return 0;
    }
}

bool isFull(){
    if(stack.tail == 4){
        return 1;
    } else {
        return 0;
    }
}

void enqueue(int input){
    if (isEmpty() == 1)
    {
        stack.tail++;
        stack.top++;
        stack.data[0] = input;
        cout << endl;
    }
    else 
    {
        stack.tail++;
        stack.data[stack.tail] = input;
        cout << endl;
    }
}

void dequeue(){
    for (int i = 0; i <= stack.tail; i++)
    {
        stack.data[i] = stack.data[i+1];
    }
    stack.tail--;
    cout << endl;
}

void showData(){
    cout << "Data: ";
    for (int i = stack.top; i <= stack.tail; i++)
    {
        cout << stack.data[i] << " "; 
    }
    cout << endl;
    cout << endl;
}

int main(){
    int pilih, input;
    inisialisasi();
    do {
        cout <<"1. enqueue data"<< endl;
        cout <<"2. dequeue data"<< endl;
        cout <<"3. showData data"<< endl;
        cout <<"4. clear data"<< endl;
        cout <<"5. exit"<< endl;
        cout <<"Pilih : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            if(isFull() == 1){
                cout << "Tumpukan Penuh" << endl;
            } else {
                cout << "Input data yang di enqueue: " << endl;
                cin >> input; 
                enqueue(input);
            }
            break;
        case 2:
            if (isEmpty() == 1)
            {
                cout << "Tumpukan Kosong" << endl;
            } else {
                cout << "Data berhasil di dequeue " << endl;
                dequeue();
            }
            break;
        case 3:
            if(isEmpty() == 1)
            {
                cout << "Tumpukan Kosong" << endl;
            } else {
                showData();
            }
            break;
        case 4:
            inisialisasi();
            break;
        }
    }while (pilih >= 1  && pilih <= 4);
    


    return 0;
}