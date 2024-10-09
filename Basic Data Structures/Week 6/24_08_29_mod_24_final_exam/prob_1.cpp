//--> Sorted

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        set<int> A;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            A.insert(x);
        }

        for (auto u : A)
            cout << u << " ";
        cout << endl;
    }

    return 0;
}
