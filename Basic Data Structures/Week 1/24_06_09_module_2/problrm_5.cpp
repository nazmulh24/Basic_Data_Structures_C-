//-->  Find and Replace

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }

//     int old_val, new_val;
//     cin >> old_val >> new_val;

//     replace(v.begin(), v.end(), old_val, new_val);

//     for (auto u : v)
//         cout << u << " ";
//     cout << endl;

//     int find_val;
//     cin >> find_val;
//     bool ss = false;

//     vector<int>::iterator it;
//     for (int i = 0; i < v.size(); i++)
//     {
//         it = find(v.begin(), v.begin() + i + 1, find_val);
//         if (it == v.begin() + i)
//         {
//             cout << i << endl;
//             ss = true;
//             break;
//         }
//     }
//     if (ss == false)
//         cout << -1 << endl;

//     return 0;
// }

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int o_v, n_v;
    cin >> o_v >> n_v;

    replace(v.begin(), v.end(), o_v, n_v);

    for (auto u : v)
        cout << u << " ";
    cout << endl;

    int f;
    cin >> f;

    bool bb = false;

    vector<int>::iterator it;

    for (int i = 0; i < v.size(); i++)
    {
        it = find(v.begin() + i, v.begin() + i + 1, f);
        if (it == v.begin() + i)
        {
            cout << i << endl;
            bb = true;
            break;
        }
    }

    if (!bb)
        cout << "-1" << endl;

    return 0;
}
