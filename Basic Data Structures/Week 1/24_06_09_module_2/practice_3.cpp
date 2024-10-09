//-->  Vector Initialization with a Fixed Value

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int ar[]={10, 20, 30, 40, 50};
//     vector<int> v(ar, ar+5);

//     for (auto u : v)
//         cout << u << " ";
//     cout << endl;

//     return 0;
// }

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    vector<int> v(arr, arr + 5);

    for (auto u : v)
        cout << u << " ";
    cout << endl;

    return 0;
}
