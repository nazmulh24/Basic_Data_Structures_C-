//--> Using double linked-list

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;

    }

    void pop()
    {
        sz--;
        Node *dNode = tail;
        tail = tail->prev;

        if (tail == NULL)
            head == NULL;
        else
            tail->next = NULL;

        delete dNode;
    }

    int top()
    {
        return tail->val;
    }
    
    int size_()
    {
        return sz;
    }

    bool empty_()
    {
        if (size_() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack lst;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        lst.push(x);
    }

    while (!lst.empty_())
    {
        cout << lst.top() << endl;
        lst.pop();
    }

    return 0;
}
