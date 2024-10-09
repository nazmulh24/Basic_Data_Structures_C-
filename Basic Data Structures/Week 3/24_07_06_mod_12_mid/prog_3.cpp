//--> Browser History

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_(Node *&head, Node *&tail, string v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

Node *find_(Node *head, const string &add)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == add)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

void visit(Node *&noow, Node *head, const string &add)
{
    Node *target_ = find_(head, add);
    if (target_ != NULL)
    {
        noow = target_;
        cout << add << endl;
    }
    else
        cout << "Not Available" << endl;
}

void trav_prev(Node *&noow)
{

    Node *&i = noow;
    if (i != NULL && i->prev != NULL)
    {
        i = i->prev;
        cout << i->val << endl;
    }
    else
        cout << "Not Available" << endl;
}

void trav_next(Node *&noow)
{
    Node *&i = noow;
    if (i != NULL && i->next != NULL)
    {
        i = i->next;
        cout << i->val << endl;
    }
    else
        cout << "Not Available" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string str;
    while (true)
    {
        cin >> str;
        if (str == "end")
            break;

        insert_(head, tail, str);
    }

    Node *noow = head; //--> current position

    int n;
    cin >> n;

    string s, add;
    while (n--)
    {
        cin >> s;
        if (s == "visit")
        {
            cin >> add;
            visit(noow, head, add);
        }
        else if (s == "next")
            trav_next(noow);
        else if (s == "prev")
            trav_prev(noow);
    }

    return 0;
}
