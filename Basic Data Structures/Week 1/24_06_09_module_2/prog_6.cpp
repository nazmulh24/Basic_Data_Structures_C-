#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v;

    // for (int i = 0; i < n; i++)  //--> without space...
    // {
    //     string s;
    //     cin >> s;
    //     v.push_back(s);
    // }

    cin.ignore();
    for (int i = 0; i < n; i++) //--> with space...
    {
        string s;
        getline(cin, s);
        v.push_back(s);
    }

    //--> Output print...
    for (auto u : v)
        cout << u << endl;

    return 0;
}
