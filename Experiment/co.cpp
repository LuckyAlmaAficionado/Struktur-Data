#include<iostream>
using namespace std;

struct STACK
{
    int top;
    int data[10];
};

STACK tumpuk;

void push(int input){
    tumpuk.top++;
    tumpuk.data[tumpuk.top] = input;
}

int pop(){
    return tumpuk.data[tumpuk.top];
}

void setawal(){
    tumpuk.top = -1;
}

bool isEmpty(){
    if(tumpuk.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool isFull(){
    if(tumpuk.top == 9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void reverse(){
    int temp[tumpuk.top];
    for (int i = 0; i <= tumpuk.top; i++)
    {
        temp[i] = tumpuk.data[tumpuk.top - i];
    }

    for (int i = 0; i <= tumpuk.top; i++)
    {
        tumpuk.data[i] = temp[i];
    }
}

void print(){
    int i;
    cout << "\nData: " << endl;
    for (int i = 0; i <= tumpuk.top; i++)
    {
        cout << tumpuk.data[i];
        if(i == tumpuk.top){
            break;
        }
        cout << " -> ";
    }
    
}

int main(){
    int pilih, input;
    setawal();
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    print();
    reverse();
    print();

    return 0;
}