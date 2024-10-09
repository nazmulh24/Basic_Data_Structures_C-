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

void SOrt(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp_2 = temp;
        while (temp_2 != NULL)
        {
            if (temp_2->val > temp->val)
                swap(temp_2->val, temp->val);

            temp_2 = temp_2->next;
        }
        temp = temp->next;
    }
}

void printt(Node *head)
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

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;

        insert_(head, v);
    }

    SOrt(head);

    printt(head);

    return 0;
}
