#include <iostream>
using namespace std;

struct Node
{
    string role, pemain;
    Node *next, *prev, *child, *parent;
} * headRoot, *tailRoot, *newRoot, *headChild, *tailChild, *newChild;

void createRoot(string role)
{
    if (headRoot == NULL)
    {
        headRoot = new Node;
        headRoot->role = role;
        headRoot->next = NULL;
        headRoot->prev = NULL;
        headRoot->child = NULL;
        tailRoot = headRoot;
    }
    else
    {
        newRoot = new Node;
        newRoot->role = role;
        newRoot->next = NULL;
        newRoot->prev = tailRoot;
        tailRoot->next = newRoot;
        tailRoot = newRoot;
    }
}

void createChild(string pemain)
{
    if (headChild == NULL)
    {
        headChild = new Node;
        headChild->pemain = pemain;
        headChild->parent = 
    }
}

void print()
{
    Node *cur = headRoot;
    while (cur != NULL)
    {
        cout << cur->role;
        if (cur->next == NULL)
        {
            break;
        }
        cout << " -> ";
        cur = cur->next;
    }
    cout << endl;
}

int main()
{
    createRoot("A");
    createRoot("B");
    createRoot("C");
    createRoot("D");

    print();
    return 0;
}