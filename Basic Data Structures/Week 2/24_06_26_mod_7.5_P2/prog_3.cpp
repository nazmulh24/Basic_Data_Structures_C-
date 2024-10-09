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

void middle_even(Node *head)
{
    Node *temp = head;

    int x = sizee(head);
    for (int i = 0; i < x / 2 - 1; i++)
    {
        temp = temp->next;
    }

    for (int i = 0; i < 2; i++)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void middle_odd(Node *head)
{
    Node *temp = head;

    int x = sizee(head);
    for (int i = 0; i < x / 2; i++)
    {
        temp = temp->next;
    }

    cout << temp->val << " " << endl;
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

    int x = sizee(head);

    if (x % 2 == 0)
    {
        middle_even(head);
    }
    else
    {
        middle_odd(head);
    }

    return 0;
}
