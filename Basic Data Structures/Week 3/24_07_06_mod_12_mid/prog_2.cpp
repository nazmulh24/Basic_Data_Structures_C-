//--> Palindrome

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool Palindromee(Node *head, Node *tail)
{
    if (head == NULL)
        return true;

    Node *i = head;
    Node *j = tail;

    while (i != j && i->prev != j)
    {
        if (i->val != j->val)
            return false;
        i = i->next;
        j = j->prev;
    }
    if (i->val != j->val)
        return false;
    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;

        insert_(head, tail, v);
    }

    if (Palindromee(head, tail))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
