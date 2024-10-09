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
        vector<int> v(n);
        vector<int> v_c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v_c[i] = v[i];
        }

        sort(v_c.begin(), v_c.end());

        if (v == v_c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
