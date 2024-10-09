//--> Same or Not II

#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        return l.empty();
    }
};

class myQueue
{
public:
    list<int> l;

    void push(int v)
    {
        l.push_back(v);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    myStack A;
    myQueue B;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        B.push(x);
    }

    bool isSame = true;

    if (m != n)
    {
        isSame = false;
        goto L;
    }

    while (!A.empty())
    {
        if (A.top() != B.front())
        {
            isSame = false;
            break;
        }
        A.pop();
        B.pop();
    }
L:
    if (isSame)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
