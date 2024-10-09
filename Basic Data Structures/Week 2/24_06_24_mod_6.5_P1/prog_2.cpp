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

void duplicatee(Node *head)
{
    if (head == NULL)
        return;

    bool aaa = false;

    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp_2 = temp;
        while (temp_2->next != NULL)
        {
            if (temp_2->next->val == temp->val)
            {
                aaa = true;
                break;
            }
            temp_2 = temp_2->next;
        }
        temp = temp->next;
    }

    if (aaa)
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

    duplicatee(head);

    return 0;
}
