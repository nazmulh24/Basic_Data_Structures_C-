//--> Elimination

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        stack<char> st;

        for (char ch : str)
        {
            if (!st.empty() && st.top() == '0' && ch == '1')
                st.pop();
            else
                st.push(ch);
        }

        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
