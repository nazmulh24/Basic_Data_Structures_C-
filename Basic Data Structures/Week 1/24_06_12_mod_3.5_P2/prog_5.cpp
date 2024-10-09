//--> Problem-5: Summation from 1 to N  ||--> O(1) == Complexity.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int sum = n * (n + 1) / 2; //--> O(1)
    cout << sum << endl;

    // vector<long long int> v(n);
    // for (int i = 0; i < n; i++)
    //     v[i] = i + 1;

    // vector<long long int> sum(n);
    // sum[0] = v[0];
    // for (int i = 1; i < n; i++)
    //     sum[i] = v[i] + sum[i - 1];

    // cout << sum[n - 1] << endl;

    return 0;
}
