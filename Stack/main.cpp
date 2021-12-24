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
    int pilih, input;
    setawal();
    do
    {
        cout << "1. push data"<< endl; 
        cout << "2. pop data"<< endl; 
        cout << "3. print data"<< endl; 
        cout << "4. clear data"<< endl; 
        cout << "5. exit"<< endl; 
        cout << "Pilih : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            if(isFull() == 1)
            {
                cout << "Tumpukan Penuh" << endl;
            }
            else
            {
                cout << "Data yang di push: ";
                cin >> input;
                push(input);
            }
            break;
        case 2:
            if (isEmpty() == 1)
            {
                cout << "Tumpukan Kosong";
            }
            else
            {
                cout << "Data yang di pop " << pop() << endl;
            }          
            break;  
        case 3:
            if(isEmpty()==1)
            {
                cout << "Tumpukan kosong";
            }
            else
            {
                print();
            }
            break;
        case 4:
            setawal();
            break;
        }
    } while (pilih >= 1 && pilih <= 4);
    return 0;
}