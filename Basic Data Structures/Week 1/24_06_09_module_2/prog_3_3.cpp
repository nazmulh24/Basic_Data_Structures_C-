#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v = {5, 1, 2, 9, 4, 5, 3, 7, 5, 9};
    // replace(v.begin(), v.end(), 5, 100); //--> 100 dara 5 er sobgula replace korbe...
    // for (int u : v)
    //     cout << u << " ";
    // cout << endl;

    // vector<int> v = {5, 1, 3, 9, 4, 5, 3, 7, 5, 9};
    // vector<int>::iterator it;
    // it = find(v.begin(), v.end(), 3); //--> 3 ase ki nai seta find korbe...
    // if (it == v.end())
    //     cout << "Not Found" << endl;
    // else
    //     cout << "Found" << endl;

    vector<int> v = {5, 1, 3, 8, 4, 5, 3, 7, 5, 9};
    auto it = find(v.begin(), v.end(), 9); //--> 3 ase ki nai seta find korbe...
    if (it == v.end())
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;

    return 0;
}
