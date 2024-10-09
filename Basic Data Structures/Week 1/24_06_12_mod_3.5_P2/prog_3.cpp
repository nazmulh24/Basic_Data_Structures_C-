//--> Problem-3 : Search Query

//--> O(n) + O(n*log(n)) + O(q*log(n)) == O(n*log(n)) + O(q*log(n)) == O((n+q)*log(n))

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) //--> O(n)
        cin >> v[i];

    sort(v.begin(), v.end()); //--> O(n*log(n))

    cin >> q;

    while (q--) //--> O(q)  ||--> total--> O(q*log(n))
    {
        int x;
        cin >> x;

        bool isFind = false;

        int beg = 0, end = n - 1, mid;

        while (beg <= end) //--> O(log(n))
        {
            mid = (beg + end) / 2;
            if (v[mid] == x)
            {
                isFind = true;
                break;
            }
            else if (v[mid] < x)
                beg = mid + 1;
            else
                end = mid - 1;
        }

        if (isFind)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
