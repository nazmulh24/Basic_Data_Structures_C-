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

int sizee(Node *head)
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

    int x1 = sizee(head);

    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_(head, v);
    }

    int x2 = sizee(head);

    if (x1 == x2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
