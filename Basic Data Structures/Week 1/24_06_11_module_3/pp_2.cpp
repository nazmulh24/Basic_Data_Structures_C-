//--> Problem 2 : LeftSum Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> left_sum(n);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        left_sum[i] = sum;
        sum += v[i];
    }

    for (auto u : left_sum)
        cout << u << " ";
    cout << endl;

    return 0;
}
