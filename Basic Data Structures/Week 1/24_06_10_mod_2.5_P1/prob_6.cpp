#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++) //--> O(n)
    {
        cin >> v[i];
    }

    while (q--) //--> O(q)
    {
        int l, r;
        cin >> l >> r;
        long long int sum = 0;
        for (int i = l - 1; i < r; i++) //--> O(n)
        {
            sum += (long long int)v[i];
        }
        cout << sum << endl;
    }

    //--> Total complexity --> O(q*n)

    return 0;
}
