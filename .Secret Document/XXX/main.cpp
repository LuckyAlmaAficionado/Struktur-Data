#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct Node
{
    char nama[30];
    int umur;
    Node *next, *prev;
};

Node *tail = NULL;
Node *head = NULL;

void cetakmundur();
void tambahDepan();
void tambahSetelah();
void tambahSebelum();

int main()
{
    int option;
    do
    {
        cout << "1. Tambah depan." << endl;
        cout << "2. Tambah setelah." << endl;
        cout << "3. Tambah sebelum." << endl;
        cout << "4. Cetak mundur." << endl;
        cout << "5. Exit." << endl;
        cout << "Masukan pilihan? ";
        cin >> option;
        switch (option)
        {
        case 1:
            tambahDepan();
            break;
        case 2:
            tambahSetelah();
            break;
        case 3:
            tambahSebelum();
            break;
        case 4:
            cetakmundur();
            break;
        default:
            break;
        }
    } while (option < 5);

    return 0;
}

void cetakmundur()
{
    Node *bantu = tail;
    while (bantu != NULL)
    {
        cout << bantu->nama << " -> ";
        bantu = bantu->prev;
    }
    cout << "NULL\n";
}
void tambahDepan()
{
    char namaorg[30];
    int umurorg;
    cout << "Nama : ";
    cin >> namaorg;
    cout << "Umur : ";
    cin >> umurorg;

    Node *baru;
    baru = new Node;
    strcpy(baru->nama, namaorg);
    baru->umur = umurorg;

    baru->prev = NULL;
    baru->next = head;
    if (head == NULL)
        tail = baru;
    else
        head->prev = baru;
    head = baru;

    cout << namaorg << " " << umurorg << " berhasil masuk list\n";
}
void tambahSetelah()
{
    char namaorg[30];
    bool found;
    cout << "Nama : ";
    cin >> namaorg;

    Node *baru = new Node;
    strcpy(baru->nama, namaorg);

    if (head == NULL)
    {
        baru->prev = NULL;
        baru->next = NULL;
        head = baru;
        tail = baru;
        found = true;
    }
    else
    {
        char cari[30];
        cout << "Tambahkan setelah siapa : ";
        cin >> cari;
        Node *bantu = head;
        while (bantu != NULL)
        {
            if (strcmp(cari, bantu->nama) == 0)
            {
                baru->next = bantu->next;
                baru->prev = bantu;
                bantu->next = baru;
                if (bantu == tail)
                    tail = baru;
                found = true;
                break;
            }
            bantu = bantu->next;
        }
    }
    if (found)
        cout << namaorg << " berhasil masuk list\n";
    else
        cout << namaorg << " gagal masuk list\n";
}

void tambahSebelum()
{
    char namaorg[30];
    bool found = false;
    cout << "Nama : ";
    cin >> namaorg;

    Node *baru = new Node;
    strcpy(baru->nama, namaorg);

    if (head == NULL)
    {
        baru->prev = NULL;
        baru->next = NULL;
        head = baru;
        tail = baru;
        found = true;
    }
    else
    {
        char cari[30];
        cout << "Tambahkan sebelum siapa : ";
        cin >> cari;
        Node *bantu = head;
        while (bantu != NULL)
        {
            if (strcmp(cari, bantu->nama) == 0)
            {
                baru->prev = bantu->prev;
                baru->next = bantu;
                bantu->prev = baru;
                if (bantu == head)
                    head = baru;
                found = true;
                break;
            }
            bantu = bantu->next;
        }
    }
    if (found)
        cout << namaorg << " berhasil masuk list\n";
    else
        cout << namaorg << " gagal masuk list\n";
}
