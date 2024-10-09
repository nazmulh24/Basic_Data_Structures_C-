//--> Problem-1 : Running Sum of an Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<long long int> sum(n);

    sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = v[i] + sum[i - 1];
    }

    for (auto u : sum)
        cout << u << " ";
    cout << endl;

    return 0;
}
