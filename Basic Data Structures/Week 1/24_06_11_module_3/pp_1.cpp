//--> Problem 1 : Detect Duplicate

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

    bool isFound = false;
    int index;

    int beg = 0, end = n - 1, mid;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (v[mid] == x)
        {
            isFound = true;
            index = mid;
            break;
        }
        else if (v[mid] < x)
            beg = mid + 1;
        else
            end = mid - 1;
    }

    if (isFound)
    {
        if (v[index - 1] == x || v[index + 1] == x)
        {
            cout << "true" << endl;
        }
        else
            cout << "false" << endl;
    }
    else
        cout << "false" << endl;

    return 0;
}
