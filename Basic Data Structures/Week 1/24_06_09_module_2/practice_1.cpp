//-->  Basic Vector Initialization

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v;

//     for (int i = 0; i < n; i++)
//         v.push_back(i + 1);

//     for (auto u : v)
//         cout << u << " ";
//     cout << endl;

//     return 0;
// }

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
        v.push_back(i + 1);

    for (auto u : v)
        cout << u << " ";

    return 0;
}
