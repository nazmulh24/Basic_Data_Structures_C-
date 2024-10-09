//--> Queries Again

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

int size_(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_any(Node *&head, Node *&tail, int pos, int v)
{
    Node *newNode = new Node(v);

    if (pos == 0)
    {
        insert_head(head, tail, v);
        return;
    }

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
        temp = temp->next;

    newNode->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = newNode;
    else
        tail = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void print_n(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_r(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        int zz = size_(head);

        // if (x == 0)
        //     insert_head(head, tail, v);
        if (x <= zz)
            insert_any(head, tail, x, v);
        else
        {
            cout << "Invalid" << endl;
            continue;
        }

        print_n(head);
        print_r(tail);
    }

    return 0;
}
