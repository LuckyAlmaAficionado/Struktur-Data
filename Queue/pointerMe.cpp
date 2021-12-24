#include <iostream>
#define Maxx 10
using namespace std;


struct queue
{
    int data[Maxx];
};

int head, tail;

void inisialisasi(){
    head = -1;
    tail = -1;
}

main(){
    inisialisasi();
}
