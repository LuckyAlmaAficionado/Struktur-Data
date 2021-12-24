#include<iostream>
using namespace std;

struct STACK
{
    int data[5] = {1,2,3,4,5};
    int top = 0, tail = 4;
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
	cout << stack.data[stack.top] << endl;
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
        cout << stack.data[i];
		if (i == stack.tail)
		{
			break;
		}
		cout << " -> ";
    }
    cout << endl;
    cout << endl;
}

int main(){
    int input;
	string pilih;
	cout << "Tampilan Antrian" << endl;
	showData(); 

	do{
		cout << "Panggil Antrian [Ya atau Tidak] ? : ";
		cin >> pilih;
		if (pilih == "Ya")
		{
			
			cout << "Antrian Keluar : ";
			dequeue();
			cout << "Antrian Masuk : ";
			cin >> input;
			enqueue(input);
			showData();

		}
		else
		{
			cout << "Antrian Selesai" << endl;
		}
		
	} while (pilih == "Ya");

    return 0;
}