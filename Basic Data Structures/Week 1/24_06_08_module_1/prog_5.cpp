#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) //--> O(Nlog(N))
    {
        int x = i;
        while (x > 0) //--> O(log(N))
        {
            cout << x % 10 << " ";
            x /= 10;
        }
        cout << endl;
    }
    return 0;
}
