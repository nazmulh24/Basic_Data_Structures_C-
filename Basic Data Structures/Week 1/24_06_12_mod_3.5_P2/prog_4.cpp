//--> Problem-4: Complexity Analysis

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    int k = 1;
    while (k <= n) //--> O(n)
    {
        cout << k << endl;
        k = k * 2;
    }

    for (int i = 0; i < n; i++) //--> O(n*n)
        for (int j = i; j > 0; j--)
            cout << i << j;

    for (int i = 0; i < n; i++) //--> O(n*n*n)
        for (int j = i; j > 0; j--)
            for (int k = j; k > 0; k--)
                cout << i << j << k;

    for (int i = n / 2; i <= n; i++) //--> O(n*log(n))
    {
        for (int j = 1; j <= n; j = j * 2)
        {
            cout << i << j << endl;
        }
    }

    for (int i = n / 2; i <= n; i++) //--> O(n*log(n))
    {
        for (int j = 1; j <= n; j = j + i)
        {
            cout << i << j << endl;
        }
    }

    return 0;
}
