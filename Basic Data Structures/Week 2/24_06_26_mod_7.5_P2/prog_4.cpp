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

void Max(Node *head)
{
    int max = INT_MIN;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val > max)
            max = temp->val;
        temp = temp->next;
    }
    cout << max << endl;
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

    Max(head);

    return 0;
}
