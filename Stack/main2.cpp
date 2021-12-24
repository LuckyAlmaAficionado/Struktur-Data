#include <iostream>
#define Maxx 4
using namespace std;

struct stack
{
    int data[Maxx];
    int top;
} stackPointer;

void inisialiasiSP(stack *s){
    s->top = 0;
}

bool isEmpty(){
    return (stackPointer.top == 0);
}

bool isFull(){
    return (stackPointer.top == Maxx);
}

void push(stack *s, int value){
    if (isFull()) {
        cout << "Gagal push, Stack Penuh" << endl;
    } else {
        s->data[s->top] = value;
        ++(s->top);
    }
}

void pop(stack *s, int m){
    if(isEmpty())
    {
        cout << "Data Kosong, gagal pop" << endl;
    }
    else
    {
        int x = s->top / 2;
        for (int i = x; i < s->top; i++)
        {
            s->data[i] = s->data[i+1];
        }
        s->top--;
    }
}

void print(stack *s){
    for(int i = 0; i < s->top; i++){
        cout << s->data[i] << " -> ";
    }
    cout << endl;
}

int main(){
    inisialiasiSP(&stackPointer);

    push(&stackPointer, 5);
    push(&stackPointer, 4);
    push(&stackPointer, 3);
    push(&stackPointer, 2);
    push(&stackPointer, 1);

    print(&stackPointer);

    pop(&stackPointer, 3); 

    print(&stackPointer);

    cout << endl;
}