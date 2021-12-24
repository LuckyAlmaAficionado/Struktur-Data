#include <iostream>
using namespace std;

struct Node
{
    string nama;
    string role;
    Node *next, *prev, *child, *parent;
} *head = NULL, *tail, *cur, *newRoot, *root = NULL, *rootTail, *newChild, *temp;

void createHead(string role)
{
    root = new Node();
    root->role = role;
    root->next = NULL;
    root->child = NULL;
    cout << root->role << " Root berhasil dibuat." << endl;
}

Node *addNextRoot(Node *node, string role)
{
    newRoot = new Node;
    newRoot->role = role;
    newRoot->next = NULL;
    newRoot->child = NULL;
    node->next = newRoot;
    cout << newRoot->role << " -> " << node->role << endl;
    return newRoot;
}

Node *addChild(Node *node, string nama)
{
    newChild = new Node;
    newChild->nama = nama;
    node->child = newChild;
    newChild->child = NULL;
    // cout << newChild->nama << " berhasil ditambahkan menjadi anak " << node->nama << endl;
    return newChild;
}

void cetakHead(Node *node = root)
{
    while (node != NULL)
    {
        cout << node->role;
        if (node->next == NULL)
        {
            break;
        }
        cout << " -> ";
        node = node->next;
    }
    cout << endl;
}

void cetakChild(Node *node)
{
    cur = node;
    while (cur != NULL)
    {
        cout << cur->role;
        cout << cur->nama;
        if (cur->child == NULL)
        {
            break;
        }
        cout << " -> ";
        cur = cur->child;
    }
    cout << endl;
}

void checkChild()
{

    cur = root;
    while (cur != NULL)
    {
        cout << cur->role << " : ";
        temp = cur->child;
        if (cur == root)
        {
            cout << "ini adalah start program";
        }
        else if (temp == NULL)
        {
            cout << "tidak memiliki anak";
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->nama;
                if (temp->child == NULL)
                {
                    break;
                }
                cout << " -> ";
                temp = temp->child;
            }
        }
        cout << endl;
        cur = cur->next;
    }
}

int main()
{
    Node *P1, *P2, *P3, *P4;
    Node *P5, *P6, *P7, *P8;
    Node *Role1, *Role2, *Role3, *Role4;
    createHead("HEAD");
    Role1 = addNextRoot(root, "A");
    Role2 = addNextRoot(Role1, "B");
    Role3 = addNextRoot(Role2, "C");
    Role4 = addNextRoot(Role3, "D");
    // cetakHead();
    cout << endl;
    P1 = addChild(Role1, "Alma");
    P2 = addChild(P1, "Lucky");
    P3 = addChild(P2, "Aficionado");
    P4 = addChild(P3, "Rigel");
    // cetakChild(Role1);

    cout << endl;
    P5 = addChild(Role2, "Deva");
    P6 = addChild(P5, "Safrizal");
    P7 = addChild(P6, "Bima");
    P8 = addChild(P7, "Arvie");

    // cetakChild(Role2);

    checkChild();

    // cetakChild(root);

    // cout << countChild(root) << endl;

    // cout << P1->child->nama << endl;

    return 0;
}
