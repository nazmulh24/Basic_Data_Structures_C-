#include <bits/stdc++.h>
using namespace std;

int main()
{
    // char c;
    // vector<int> fre(26, 0);
    // while (cin >> c) //--> space complexity O(1).
    // {
    //     int val = c - 'a';
    //     fre[val]++;
    // }

        string s;
        cin >> s;
        vector<string> v;
        v.push_back(s);

        vector<int> fre(26, 0);  //--> space complexity O(n).

        for (int i = 0; i < s.size(); i++)
        {
            int val = v[0][i] - 'a';
            fre[val]++;
        }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
            cout << char(i + 'a') << " : " << fre[i] << endl;
    }

    return 0;
}
