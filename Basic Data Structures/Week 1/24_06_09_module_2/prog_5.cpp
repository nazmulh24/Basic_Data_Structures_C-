#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    int n;
    cin >> n;
    vector<int> v(n); 
    for (int i = 0; i < n; i++)
        cin >> v[i];

    //--> Output print...
    for (auto u : v)
        cout << u << " ";
    cout << endl;

    return 0;
}
