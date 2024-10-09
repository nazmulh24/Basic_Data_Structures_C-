#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {5, 1, 3, 9, 4, 5, 3, 7, 5, 9};
    // cout << v.back() << endl;
    // cout << v[0] << endl;
    // cout << v.at(3) << endl;
    //

    vector<int> v = {2, 5, 1, 7, 4, 9};

    // vector<int>::iterator it;
    // for (it = v.begin(); it < v.end(); it++)
    //     cout << *it << " ";
    // cout << endl;

    for (auto it = v.begin(); it < v.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}
