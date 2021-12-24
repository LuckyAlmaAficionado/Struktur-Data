#include <iostream>
using namespace std;

struct Node
{
    string nama;
    Node *next, *child, *parent;
} * root, *newRoot;

void createRoot(string nama)
{
    if (root != NULL)
    {
        cout << "\nRoot sudah dibuat" << endl;
    }
    else
    {
        root = new Node();
        root->nama = nama;
        root->next = NULL;
        root->child = NULL;
        cout << "\nNode " << nama << " berhasil dibuat root" << endl;
    }
}

Node *addNext(Node *node, string nama)
{
    newRoot = new Node();
    newRoot->nama = nama;
    node->next = newRoot;
    newRoot->next = NULL;
    newRoot->child = NULL;
    cout << "berhasil ditambahkan menjadi anak root" << endl;
    return newRoot;
}

Node *createChild(Node *node, string nama)
{
    Node *newChild = new Node();
    newChild->nama = nama;
    newChild->parent = node;
    node->child = newChild;
    newChild->child = NULL;
    cout << endl;
    cout << nama << " berhasil ditambahkan " << newChild->parent->nama;
    return newChild;
}

void preOrder(Node *node)
{
    if (!root)
    {
        cout << "\nBuat tree terlebih dahulu!!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            cout << endl;
            cout << node->nama;
            preOrder(node->child);
        }
    }
}

void cekNama(string data)
{
    if (!root)
    {
        cout << "buat root terlebih dahulu" << endl;
    }
    else
    {
        Node *cur, *bottom;
        cur = root;
        bottom = root;
        while (cur != NULL)
        {
            cout << endl;
            cout << "Parent: " << cur->nama << endl;
            while (bottom != NULL)
            {
                cout << bottom->nama << endl;
                bottom = bottom->child;
            }
            cur = cur->next;
        }
    }
}

void cekAnak(Node *node)
{
    Node *cur = node;
    while (cur != NULL)
    {
        cout << cur->nama << endl;
        cur = cur->child;
    }
    cout << endl;
}

int main()
{
    Node *jabatan1, *jabatan2;
    Node *nama1, *nama2;
    Node *nama3, *nama4;
    createRoot("root");
    jabatan1 = addNext(root, "jabatan 1");
    jabatan2 = addNext(jabatan1, "jabatan 2");

    nama1 = createChild(jabatan1, "Lucky");
    nama2 = createChild(nama1, "Alma");

    nama3 = createChild(jabatan2, "Rigel");
    nama4 = createChild(nama3, "Aficionado");
    cekAnak(jabatan1);
}