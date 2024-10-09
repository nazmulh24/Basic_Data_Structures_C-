//-->  Vector Initialization with a Fixed Value

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(5, n);

//     for (auto u : v)
//         cout << u << " ";
//     cout << endl;

//     return 0;
// }

int main()
{
    int n;
    cin >> n;

    vector<int> v(5, n);

    for (auto u : v)
        cout << u << " ";

    return 0;
}
