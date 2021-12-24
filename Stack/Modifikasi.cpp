#include<iostream>
#define max 10
using namespace std;

struct STACK{
    int data[max];
    int top;
}tumpuk;

void inisialisasi(){
    tumpuk.top = -1;
}

bool isEmpty(){
    if (tumpuk.top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(){
    if (tumpuk.top == max-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(int data){
    if (isFull())
    {
        cout << "Stack penuh" << endl;
    }
    else
    {
        tumpuk.top++;
        tumpuk.data[tumpuk.top] = data;
    }
}

void pop(){
    tumpuk.data[tumpuk.top];
    tumpuk.top--;
}

void print(){
    int i;
    cout << "Data: " << endl;
    for (int i = 0; i <= tumpuk.top; i++)
    {
        cout << tumpuk.data[i] << " " ;
        cout << endl;
    }
}

int main(){
    int berat, temp, option;
    inisialisasi();
    do
    {
        cout << "Masukan opsi: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Masukan berat barang: ";
            cin >> berat;
            if(berat > 0)
            {
                temp+=berat;
                if (temp >= 10)
                {
                    while (temp >= 10)
                    {
                        push(10);
                        temp -= 10;
                    }
                }
                if (temp == 5)
                {
                    while (temp >= 5)
                    {
                        push(5);
                        temp -= 5;
                    }
                }
            }
            break;
        case 2:
            print();
            break;
        case 3:
            pop();
            break;
        }
    } while (option != 4);

    return 0;
}