#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {10, 20, 30};
    // vector<int> x = {1, 2, 3};
    // x = v; //--> O(1)  -> v ar x er size same... same na hole jeta boro hoto seta hoto...example -> v er size = n __ x er size = m __ v>x __ tahole O(n) hoto...
    // for (int u : x)
    //     cout << u << " ";
    // cout << endl;

    vector<int> v = {10, 20, 30, 40};
    v.pop_back(); //--> delete last element..
    for (int u : v)
        cout << u << " ";
    cout << endl;

    return 0;
}
