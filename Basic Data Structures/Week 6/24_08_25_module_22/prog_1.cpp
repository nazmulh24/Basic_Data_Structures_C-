//--> Insert in Heap

#include <bits/stdc++.h>
using namespace std;

void heap_max(vector<int> &v, int x)
{
    int cur_idx = v.size() - 1;
    // cout << cur_idx << endl;

    while (cur_idx != 0)
    {
        int p = (cur_idx - 1) / 2;
        // cout << p << endl;

        if (v[cur_idx] > v[p])
            swap(v[cur_idx], v[p]);
        else
            break;

        cur_idx = p;
    }
}

void heap_min(vector<int> &v, int x)
{
    int cur_idx = v.size() - 1;
    // cout << cur_idx << endl;

    while (cur_idx != 0)
    {
        int p = (cur_idx - 1) / 2;
        // cout << p << endl;

        if (v[cur_idx] < v[p])
            swap(v[cur_idx], v[p]);
        else
            break;

        cur_idx = p;
    }
}

int main()
{
    //--> 50 40 45 30 35 42 32 25 20 10

    vector<int> v;
    int x;
    for (int i = 0; i < 10; i++) //--> O(N)
    {
        cin >> x;
        v.push_back(x);
        heap_max(v, x); //--> O(logN)
    }

    // int num;
    // cin >> num;
    // v.push_back(num);
    // heap_max(v, num);

    for (auto u : v)
        cout << u << " ";
    cout << endl;

    return 0;
}
