//--> Count Me

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);

        map<string, int> mp;

        int cnt = 0;
        string ans;

        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > cnt)
            {
                cnt = mp[word];
                ans = word;
            }
        }

        cout << ans << " " << cnt << endl;
    }

    return 0;
}
