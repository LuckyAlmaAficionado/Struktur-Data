#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

// Membuat Struct Node
struct Node{
    char name[30];
    int umur;
    Node *next;
};

// Global Variable
Node *head = NULL;
Node *tail = NULL;
int maxm = 5;
int jmlData = 0;

// Fungsi Checker Antrian
bool isFull(){
    if (jmlData>=maxm) return true;
    else return false;
}

bool isEmpty(){
    if (jmlData == 0) return true;
    else return false;
}

// Prosedur Enqueue dengan cara menambah data di belakang
void enqueue(){
    cout << endl;
    cout << "Insert the Data: " << endl;
    if (isFull()) cout << "Sorry Queue is Full\n";
    else{
        char tempNama[30];
        int tempUmur;
        cout << "Masukkan Nama Anda: "; cin >> tempNama;
        cout << "Masukkan Umur Anda: "; cin >> tempUmur;
        Node *baru;
        baru = new Node;
        strcpy(baru->name, tempNama);
        baru->umur = tempUmur;
        // Menambah Data Untuk Pertama Kalinya
        if (head == NULL){
            head = baru;
            head->next = NULL;
            tail = head;
            jmlData++;
        }
        else{
            tail->next = baru;
            tail = baru;
            tail->next = NULL;
            jmlData++;
        }
    }
    cout << endl;
}

// Prosedur Dequeue dengan menghapus data depan
void dequeue(){
    cout << endl;
    if (isEmpty()) cout << "Queue is Empty Please Get the ticket to queue\n";
    else{
        cout << "Antrian Atas Nama: " << head->name << " Telah Selesai" << endl;
        if(head == tail){
            // Free Up Memory
            delete head;
            // Set head & tail to NULL
            head = NULL;
            tail = NULL;
            jmlData = 0;
        }
        else{
            Node *bantu;
            bantu = head->next;
            delete head;
            head = bantu;
            jmlData--;
        }
    }
    cout << endl;
}

// Prosedur Menampilkan Data
void tampilData(){
    cout << endl;
    cout << "Stack Data Preview: " << endl;
    if (isEmpty()) cout << "No Data To Be Showed Up\n";
    else{
        Node *bantu;
        bantu = head;
        if (head != NULL){
            while (bantu != NULL){
                cout << "Nama: " << bantu->name << " Umur: " << bantu->umur << endl;
                bantu= bantu->next;
            }
        }
    }
    cout << endl;
}

int main()
{
    int pilih=1;
    while (pilih!=0){
        cout << "<< QUEUE LINKED LIST >>" << endl;
        cout << ">> 1. Enqueue" << endl;
        cout << ">> 2. Dequeue" << endl;
        cout << ">> 3. Show Data" << endl;
        cout << "Pilihan Anda: "; cin >> pilih;
        if (pilih == 1) enqueue();
        if (pilih == 2) dequeue();
        if (pilih == 3) tampilData();
    }
    return 0;
}
