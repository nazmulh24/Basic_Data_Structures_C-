#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int x;
    cin >> x;

    sort(v.begin(), v.end()); //--> O(n*log(n))

    int beg = 0, end = n - 1, mid;

    while (beg <= end) //--> O(log(n))
    {
        mid = (beg + end) / 2;
        if (v[mid] == x)
        {
            cout << x << " is founded..." << endl;
            return 0;
        }
        else if (v[mid] < x)
            beg = mid + 1;
        else
            end = mid - 1;
    }
    cout << x << " is not found..." << endl;

    return 0;
}
