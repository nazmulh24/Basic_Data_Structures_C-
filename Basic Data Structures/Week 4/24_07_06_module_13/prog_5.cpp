//--> Using STL stack...

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    if (!st.empty())
        cout << st.top() << endl;

    return 0;
}
