//--> Word Count

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);

    string word;
    stringstream ss(sentence);

    map<string, int> mp;

    while (ss >> word)
    {
        // cout << word << endl;
        mp[word]++;
    }

    for (auto u : mp)
        cout << u.first << " " << u.second << endl;

    return 0;
}
