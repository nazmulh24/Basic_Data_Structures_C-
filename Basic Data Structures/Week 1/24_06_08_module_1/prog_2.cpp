#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
     for(int i=1;i<=n;i=i*2) //--> O(logN)
    {
        cout<<i<<endl;
    }
    return 0;
}