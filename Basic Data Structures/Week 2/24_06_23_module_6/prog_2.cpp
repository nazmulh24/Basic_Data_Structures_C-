
//--> Insert at Tail...

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

void inser_at_tail(Node *&head, int v)
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
    cout << "Your Linked List is : ";

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

    while (true)
    {
        int op;
        cout << "Option 1 : Insert at Tail." << endl;
        cout << "Option 2 : Print Linked List." << endl;
        cout << "Option 3 : Terminate" << endl;
        cin >> op;

        if (op == 1)
        {
            int v;
            cout << "Please, Enter a value : ";
            cin >> v;
            inser_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}
