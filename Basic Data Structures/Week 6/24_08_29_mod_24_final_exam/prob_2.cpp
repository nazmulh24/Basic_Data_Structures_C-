//--> Pairs

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
    {
        if (a.second > b.second)
            return true;
        else
            return false;
    }
    if (a.first < b.first)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<string, int> > A(n);

    for (int i = 0; i < n; i++)
        cin >> A[i].first >> A[i].second;

    sort(A.begin(), A.end(), cmp);

    for (auto u : A)
        cout << u.first << " " << u.second << endl;

    return 0;
}
