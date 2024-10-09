
//--> Take Link List Input...

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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    } //--> reference na nile main function a update hobe na...

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    } //--> temp akhon last node a...
    temp->next = newNode;
}

void print_linked_list(Node *head)
{
    cout << "Your Linked List -> ";

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

    int val;
    cout << "Insert Value here : ";
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail(head, val);
    }

    print_linked_list(head);

    return 0;
}

