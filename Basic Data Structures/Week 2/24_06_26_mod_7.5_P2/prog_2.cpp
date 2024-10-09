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

void insert_(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void rev(Node *head)
{
    Node *temp = head;

    if (temp == NULL)
        return;

    rev(temp->next);

    cout << temp->val << " ";
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_(head, v);
    }

    rev(head);

    return 0;
}
