//--> Using list

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
    int size_()
    {
        return l.size();
    }
    bool empty_()
    {
        if (l.size() == 0)
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
