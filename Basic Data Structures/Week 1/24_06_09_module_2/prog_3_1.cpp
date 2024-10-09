#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1, 2, 3, 4, 5};
    // v.insert(v.begin() + 2, 10);  //--> 2 no index a 10 insert korbe...
    // for (int u : v)
    //     cout << u << " ";
    // cout << endl;

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v11 = {6, 7, 8, 9, 0};
    v.insert(v.begin() + 5, v11.begin(), v11.end()); //--> 5 no index a v11 vector insert korbe...
    for (int u : v)
        cout << u << " ";
    cout << endl;

    return 0;
}
 