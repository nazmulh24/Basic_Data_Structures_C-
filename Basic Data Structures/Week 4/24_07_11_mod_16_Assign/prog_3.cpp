//--> Is It Valid

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
            if (ch == '0')
            {
                if (!st.empty() && st.top() == '1')
                    st.pop();
                else
                    st.push(ch);
            }
            else if (ch == '1')
            {
                if (!st.empty() && st.top() == '0')
                    st.pop();
                else
                    st.push(ch);
            }
        }

        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
