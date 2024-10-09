//--> Remove Duplicate

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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void remove_duplicate(Node *&head)
{
    if (head == NULL)
        return;

    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp_2 = temp;
        while (temp_2->next != NULL)
        {
            if (temp_2->next->val == temp->val)
            {
                Node *DeleteNode = temp_2->next;
                temp_2->next = temp_2->next->next;
                delete DeleteNode;
            }
            else
                temp_2 = temp_2->next;
        }
        temp = temp->next;
    }
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

    remove_duplicate(head);

    print_linked_list(head);

    return 0;
}
