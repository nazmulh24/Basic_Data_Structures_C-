//--> Queries

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

void insert_tail(Node *&head, int v)
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

void insert_head(Node *&head, int v)
{
    Node *newNode = new Node(v);

    newNode->next = head;
    head = newNode;
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

void delete_list(Node *&head, int v)
{
    if (head == NULL)
    {
        return;
    }
    if (v == 0)
    {
        Node *delete_node = head;
        head = head->next;
        delete delete_node;
    }
    else if (v < sizee(head))
    {
        Node *temp = head;
        for (int i = 1; i <= v - 1; i++)
        {
            temp = temp->next;
        }
        Node *delete_node = temp->next;
        temp->next = temp->next->next;
        delete delete_node;
    }
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

int main()
{
    Node *head = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
            insert_head(head, v);
        else if (x == 1)
            insert_tail(head, v);
        else if (x == 2)
            delete_list(head, v);

        print_linked_list(head);
    }

    return 0;
}
