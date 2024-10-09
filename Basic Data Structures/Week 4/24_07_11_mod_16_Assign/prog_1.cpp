//--> Same or Not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> A;
    queue<int> B;

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
