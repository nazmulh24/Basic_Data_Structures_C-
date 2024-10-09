//--> Get Difference

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
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
    tail = newNode;
}

void print_diff(Node *head)
{
    int max = INT_MIN;
    int min = INT_MAX;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val > max)
            max = temp->val;
        if (temp->val < min)
            min = temp->val;

        temp = temp->next;
    }

    int d = max - min;
    cout << d << endl;
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

    print_diff(head);

    return 0;
}
