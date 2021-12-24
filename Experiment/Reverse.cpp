#include <iostream>
using namespace std;

struct STACK
{
    int top;
    int data[10]; 
}stack;

bool isFull() {
  if ( stack.top == 9 ) {
      return true;
  } else {
      return false;
  }
}

bool isEmpty(){
  if(stack.top == -1) {
      return true;
  } else {
      return false;
  }
}

void pushArray(int dataInput) {
  if( !isFull() ) {
    stack.data[stack.top+1] = dataInput;
    cout<<"berhasil push "<<dataInput<<endl;
    stack.top++;
	}
}

void popArray() {
	if( !isEmpty() ) { 
		cout<<"berhasil pop "<<stack.data[stack.top]<<endl;
		stack.top--;
	}
}

void inisialisasi() {
	stack.top = -1;
}


void reverse(){
  cout << "Reverse: " << endl;
  for (int i = 0; i <= stack.top; i++) {
    cout << stack.data[i] << " " ;
    cout << endl;
  } 
}


void print(){
  cout << "Data Sebelum reverse: " << endl;
  for (int i = stack.top; i >= 0; i--) {
    cout << stack.data[i] << " " ;
    cout << endl;
  } 
}
 
int main(){
    int choose, input;
    inisialisasi();
    do {
      cout << "1. push data"<< endl; 
      cout << "2. pop data"<< endl; 
      cout << "3. print data"<< endl; 
      cout << "4. clear data"<< endl; 
      cout << "5. reverse data"<< endl; 
      cout << "6. exit"<< endl; 
      cout << "Pilih : ";
      cin >> choose;
      switch (choose) {
        case 1:
            if(isFull() == 1) {
                cout << "Tumpukan Penuh" << endl;
            } else {
            cout << "Data yang di push: ";
            cin >> input;
            pushArray(input);
            } break;
        case 2:
            if (isEmpty() == 1) {
                cout << "Tumpukan Kosong"<<endl;
            } else {
                popArray();
            } break;  
        case 3:
            if(isEmpty()==1) {
                cout << "Tumpukan kosong"<<endl;
            } else {
                print();
            } break; 
        case 4:
            inisialisasi();
            break;
        case 5:
            reverse();
            break;
        }
    }
        while (choose >= 1 && choose <= 5);
    return 0;
}