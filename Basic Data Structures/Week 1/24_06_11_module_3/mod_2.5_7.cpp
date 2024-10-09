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

    sort(v.begin(), v.end()); //--> O(n*log(n))

    while (q--) //--> O(q)
    {
        int x;
        cin >> x;

        bool isF = false;

        int beg = 0, end = n - 1, mid;

        while (beg <= end) //--> O(log(n))
        {
            mid = (beg + end) / 2;
            if (v[mid] == x)
            {
                isF = true;
                break;
            }
            else if (v[mid] > x)
                end = mid - 1;
            else
                beg = mid + 1;
        }
        if (isF)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}
