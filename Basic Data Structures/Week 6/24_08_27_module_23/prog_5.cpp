//--> STL set

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); //--> O(logN)
    }

    if (s.count(7) > 0)
        cout << "Ase" << endl;
    else
        cout << "Nai" << endl;

    for (auto u : s)
        cout << u << " ";
    cout << endl;

    return 0;
}
