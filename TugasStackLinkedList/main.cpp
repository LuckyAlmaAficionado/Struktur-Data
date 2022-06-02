#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

// Struct Node
struct Node
{
    char name[30];
    int umur;
    Node *next;
};

// Global Variable
Node *tail = NULL;
int jmlData = 0;
int maxm = 5;

// Fungsi Checker Antrian
bool isFull()
{
    if (jmlData >= maxm)
        return true;
    else
        return false;
}

bool isEmpty()
{
    if (jmlData == 0)
        return true;
    else
        return false;
}

// Prosedur Push / Menambahkan Data secara tambah data belakang
void pushData()
{
    cout << endl;
    cout << "Insert the Data: " << endl;
    if (isFull())
        cout << "Sorry Stack is Full\n";
    else
    {
        // Variable Penampung Nama & Umur
        char tempNama[30];
        int tempUmur;
        cout << "Masukkan Nama Anda: ";
        cin >> tempNama;
        cout << "Masukkan Umur Anda: ";
        cin >> tempUmur;
        // Node Penampung
        Node *baru;
        baru = new Node;
        // Store data ke struct Node
        strcpy(baru->name, tempNama);
        baru->umur = tempUmur;
        // Memasukkan Data secara belakang
        baru->next = tail;
        tail = baru;
        jmlData++;
    }
    cout << endl;
}

// Prosedur Mengurangi Data dengan cara menghapus data belakang
void popData()
{
    // Check Jika Stack Kosong
    cout << endl;
    if (isEmpty())
        cout << "Stack is Empty You Can Insert Data Here\n";
    else
    {
        cout << "Antrian Atas Nama: " << tail->name << " Telah Selesai." << endl;
        Node *bantu = tail;
        tail = tail->next;
        delete bantu;
        jmlData--;
    }
    cout << endl;
}

// Prosedur Tampil Data
void tampilData()
{
    cout << endl;
    cout << "Stack Data Preview: " << endl;
    if (isEmpty())
        cout << "No Data To Be Showed Up\n";
    else
    {
        Node *bantu = tail;
        while (bantu != NULL)
        {
            cout << "Nama: " << bantu->name << endl;
            cout << "Umur: " << bantu->umur << endl;
            bantu = bantu->next;
        }
    }
    cout << endl;
}

int main()
{
    int pilih = 1;
    while (pilih != 0)
    {
        cout << "<< STACK LINKED LIST >>" << endl;
        cout << ">> 1. Push Data" << endl;
        cout << ">> 2. Pop Data" << endl;
        cout << ">> 3. Show Data" << endl;
        cout << "Pilihan Anda: ";
        cin >> pilih;
        if (pilih == 1)
            pushData();
        if (pilih == 2)
            popData();
        if (pilih == 3)
            tampilData();
    }
    return 0;
}
