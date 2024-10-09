//--> Using vector

#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size_()
    {
        return v.size();
    }
    bool empty_()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack stk;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        stk.push(x);
    }

    while (!stk.empty_())
    {
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}
