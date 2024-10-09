#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++) //--> O(n)
    {
        cin >> v[i];
    }

    vector<long long int> prefix_sum_1(n);

    prefix_sum_1[0] = v[0];

    for (int i = 1; i < n; i++) //--> O(n)
    {
        prefix_sum_1[i] = v[i] + prefix_sum_1[i - 1];
    }

    while (q--) //--> O(q)
    {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        long long int sum = 0;

        if (l == 0)
            sum = prefix_sum_1[r] - 0;
        else
            sum = prefix_sum_1[r] - prefix_sum_1[l - 1];

        cout << sum << endl;
    }

    return 0;
}
