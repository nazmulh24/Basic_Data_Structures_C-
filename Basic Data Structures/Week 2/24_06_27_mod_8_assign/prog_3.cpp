//--> Same to Same

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

vector<int> is_samee(Node *head)
{
    vector<int> v;

    Node *temp = head;
    while (temp != NULL)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }

    return v;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int v;
    while (true) //--> 1st list
    {
        cin >> v;
        if (v == -1)
            break;

        insert_(head, tail, v);
    }

    vector<int> v1 = is_samee(head);

    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    tail = NULL;

    while (true) //--> 2nd list
    {
        cin >> v;
        if (v == -1)
            break;

        insert_(head, tail, v);
    }

    is_samee(head);

    vector<int> v2 = is_samee(head);

    if (v1 == v2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
