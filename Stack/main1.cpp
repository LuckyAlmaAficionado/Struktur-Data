#include<iostream>
using namespace std;

int max = 5, a = 0;
int Arr[5];

// push
// pop
// isEmpty
// isFull

void showMenu(){
    cout << "1. push data"<< endl; 
    cout << "2. pop data"<< endl; 
    cout << "3. print data"<< endl; 
    cout << "4. clear data"<< endl; 
    cout << "5. exit"<< endl; 
    cout << "Pilih : ";
}

void setAwal(){
    a = -1;
}

void push(int input){
    Arr[a] = input;
    a++;
}

int pop(){
    Arr[a];
    a--;
    return Arr[a];
}

bool setEmpty(){
    if (a == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool setFull(){
    if (a == 4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void showData(){
    cout << "Data:" << endl;
    for(int i = 0; i < a; i++)
    {
        cout << Arr[i] << " ";
        cout << endl;
    }
}

int main(){
    int pilih, input;
    do
    {
        showMenu();
        cin >> pilih;
        switch (pilih)
        {
        case 1: 
            if (setFull() == 1)
            {
                cout << "Tumpukan penuh" << endl;
            }
            else
            {
                cout << "Masukan value data : ";
                cin >> input;
                push(input);
            }
            break;
        case 2:
            if (setEmpty() == 1)
            {
                cout << "Tumpukan kosong" << endl;
            }
            else
            {
                cout << "Data yang di pop " << pop() << endl;
            }
            break;
        case 3:
            showData();
            break;
        case 4:
            setAwal();
            break;
        }
    } while (pilih >= 1 && pilih <= 4);
    


    return 0;
}