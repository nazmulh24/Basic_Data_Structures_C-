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

void insert(Node *&head, int v)
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

void isSorted(Node *head)
{
    Node *temp = head;
    bool aaa = false;
    while (temp->next != NULL)
    {
        if (temp->val > temp->next->val)
        {
            aaa = true;
            break;
        }
        temp = temp->next;
    }
    if (!aaa)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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

        insert(head, v);
    }

    isSorted(head);

    return 0;
}
