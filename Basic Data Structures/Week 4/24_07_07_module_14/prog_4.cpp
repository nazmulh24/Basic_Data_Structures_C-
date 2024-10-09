//--> Using STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    int n;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        q.push(v);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
