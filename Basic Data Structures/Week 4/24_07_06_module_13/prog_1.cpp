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
    stk.push(10);
    stk.push(20);
    cout << stk.top() << endl;
    stk.pop();
    cout << stk.top() << endl;
    stk.pop();
    cout << stk.top() << endl;
    return 0;
}
