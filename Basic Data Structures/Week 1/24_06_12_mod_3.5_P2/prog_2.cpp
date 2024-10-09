//--> Problem 2: Equilibrium Index

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sum = 0;
    vector<long long int> left_sum(n); //--> Findling left_sum...
    for (int i = 0; i < n; i++)
    {
        left_sum[i] = sum;
        sum += v[i];
    }

    sum = 0;
    vector<long long int> right_sum(n); //--> Findling right_sum...
    for (int i = n - 1; i >= 0; i--)
    {
        right_sum[i] = sum;
        sum += v[i];
    }

    for (int i = 0; i < n; i++)
        if (left_sum[i] == right_sum[i])
        {
            cout << i << endl;
            break;
        }

    return 0;
}
