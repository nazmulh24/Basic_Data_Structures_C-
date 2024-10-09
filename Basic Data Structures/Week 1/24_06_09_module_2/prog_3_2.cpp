#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1, 2, 3, 4, 5};
    // v.erase(v.begin() + 3); //--> 3 no index delete...
    // for (int u : v)
    //     cout << u << " ";
    // cout << endl;

    vector<int> v = {0, 1, 2, 3, 4, 5};
    v.erase(v.begin() + 1, v.begin() + 3); //--> index 1-2 ba_-> 3 er ag porjontu delete korbe...
    for (int u : v)
        cout << u << " ";
    cout << endl;

    return 0;
}
