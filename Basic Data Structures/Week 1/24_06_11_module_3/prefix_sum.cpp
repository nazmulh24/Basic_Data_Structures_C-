#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> pre_sum(n);
    pre_sum[0] = v[0];

    for (int i = 1; i < n; i++) //--> O(n)
        pre_sum[i] = v[i] + pre_sum[i - 1];

    for (auto u : pre_sum)
        cout << u << " ";
    cout << endl;

    return 0;
}
