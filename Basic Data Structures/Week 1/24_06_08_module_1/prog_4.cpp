#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) //--> O(N*N)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (i + 1) * (j + 1) << " ";
        }
        cout << endl;
    }
    return 0;
}
