//-->  Captalize The First Character of a Word

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        if (v[i][0] >= 'a' && v[i][0] <= 'z')
            v[i][0] = v[i][0] - 32;
    }

    // for (int i = 0; i < n; i++) //--> also
    // {
    //     string s;
    //     cin >> s;
    //     if (s[0] >= 'a' && s[0] <= 'z')
    //         s[0] = s[0] - 32;
    //     v.push_back(s);
    // }

    for (auto u : v)
        cout << u << endl;

    return 0;
}

