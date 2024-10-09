#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end()); //--> O(N*log(N))

    bool isFind = false;

    for (int i = 1; i < n; i++) //--> O(N)
        if (v[i] == v[i - 1])
        {
            isFind = true;
            break;
        }

    if (isFind)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
