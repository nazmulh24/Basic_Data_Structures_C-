//--> Special Queries

#include <bits/stdc++.h>
using namespace std;

#define max_st_sz 1001

int main()
{
    int q;
    cin >> q;

    queue<string> qq;

    while (q--)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            string str;
            cin >> str;
            if (str.length() <= max_st_sz)
                qq.push(str);
        }
        else if (n == 1)
        {
            if (qq.empty())
                cout << "Invalid" << endl;
            else
            {
                cout << qq.front() << endl;
                qq.pop();
            }
        }
    }
    return 0;
}
