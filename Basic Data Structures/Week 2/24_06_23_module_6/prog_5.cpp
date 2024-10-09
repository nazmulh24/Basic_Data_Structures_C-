
//--> Delete from Position...

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

void inser_at_any_index(Node *head, int index, int v)
{
    Node *newNode = new Node(v);

    Node *temp = head;
    for (int i = 1; i <= index - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Inserted ..." << endl;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
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

void delete_from_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        int op;
        cout << "Option 1 : Insert at Tail." << endl;
        cout << "Option 2 : Print Linked List." << endl;
        cout << "Option 3 : Insert at any Index." << endl;
        cout << "Option 4 : Insert at Head." << endl;
        cout << "Option 5 : Delete from Position." << endl;
        cout << "Option 6 : Terminate" << endl;
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
            int index;
            cout << "Enter Index : ";
            cin >> index;
            int v;
            cout << "Enter a value : ";
            cin >> v;

            inser_at_any_index(head, index, v);
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter a value : ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter the position : ";
            cin >> pos;

            delete_from_position(head, pos);
        }
        else if (op == 6)
        {
            break;
        }
    }

    return 0;
}
