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

void print_linked_list(Node *head)
{
    cout << endl
         << "Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void insert_at_any_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Done!!!" << endl
         << endl;
}

int main()
{
    Node *head = NULL;

    while (1)
    {
        int v;
        cout << "Choice 1 : Insert at any position." << endl;
        cout << "Choice 2 : Print Linked List." << endl;
        cin >> v;
        switch (v)
        {
        case 1:
            int pos;
            cout << endl
                 << "Enter the position : ";
            cin >> pos;
            int v;
            cout << "Enter the value : ";
            cin >> v;

            insert_at_any_position(head, pos, v);
            break;

        case 2:
            print_linked_list(head);
            break;

        default:
            exit(0);
        }
    }
    return 0;
}

