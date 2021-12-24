#include <iostream>
using namespace std;

// deklarasi single linkedlist
struct market
{
    string nameBarang;
    int hargaBarang;
    market *next;

}*head, *tail, *cur, *NewNode, *del;

void CreateSingleLinkedList(string nameBarang, int hargaBarang){
    head = new market();
    head->nameBarang = nameBarang;
    head->hargaBarang = hargaBarang;
    head->next = NULL;
    tail = head;
}

void addFirst(string nameBarang, int hargaBarang){
    NewNode = new market();
    NewNode->nameBarang = nameBarang;
    NewNode->hargaBarang = hargaBarang;
    NewNode->next = head;
    head = NewNode;
}

void addLast(string nameBarang, int hargaBarang){
    NewNode = new market();
    NewNode->nameBarang = nameBarang;
    NewNode->hargaBarang = hargaBarang;
    NewNode->next = NULL;
    tail->next = NewNode;
    tail = NewNode;
}

void addMiddle(string nameBarang, int hargaBarang, int posisi){
    NewNode = new market();
    NewNode->nameBarang = nameBarang;
    NewNode->hargaBarang = hargaBarang;

    // transversing
    cur = head;
    int nomor = 1;
    while (nomor < posisi-1)
    {
        cur = cur->next;
    }

    NewNode->next = cur->next;
    cur->next = NewNode;
    
}

void ChangeMiddle(string nameBarang, int hargaBarang, int posisi){
    NewNode = new market();
    NewNode->nameBarang = nameBarang;
    NewNode->hargaBarang = hargaBarang;
}

void RemoveFirst(){
    del = head;
    head = head->next;
    delete del;
}

void RemoveLast(){
    del = tail;
    cur = head;
    while(cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;
}

void PrintSingleLinkedList(){
    cur = head;
    while ( cur != NULL)
    {
        // cout << "Nama Barang : " << cur->nameBarang << endl;
        // cout << "Harga Barang : " << cur->hargaBarang << endl;
        cout << cur->nameBarang << " " << cur->hargaBarang;
        cout << " -> ";
        cur = cur->next;
    }
    cout << "Null";

}
int main(){
    CreateSingleLinkedList("Sabun", 12800);
    PrintSingleLinkedList();

    cout << endl;
    addFirst("Shampo", 20000);
    addFirst("Minuman", 5000);
    PrintSingleLinkedList();

    cout << endl;
    addLast("Snack", 10000);
    addLast("Obat", 40000);
    PrintSingleLinkedList();

    cout << endl;
    RemoveFirst();
    PrintSingleLinkedList();

    cout << endl;
    RemoveLast();
    PrintSingleLinkedList();
    return 0;
}