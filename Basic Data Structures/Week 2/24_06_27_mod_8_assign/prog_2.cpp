//--> Search

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

void search(Node *head, int x)
{
    Node *temp = head;

    bool flag = false;
    int cnt = 0;
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            flag = true;
            break;
        }
        temp = temp->next;
        cnt++;
    }
    if (flag)
        cout << cnt << endl;
    else
        cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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

        int x;
        cin >> x;

        search(head, x);
    }

    return 0;
}
