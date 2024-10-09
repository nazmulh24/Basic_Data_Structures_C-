#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v1; //--> Type-1
    //

    vector<int> v = {1, 4, 8};
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    //

    // cout << v1.size() << endl;
    //

    // // vector<int> v2(5); //--> Type-2
    // vector<int> v2(5, 2); //--> Type-3

    // cout << v2.size() << endl;
    // for (int i = 0; i < v2.size(); i++)
    //     cout << v2[i] << " ";
    // cout << endl;
    //

    // vector<int> v3(5, 100);
    // vector<int> v(v3); //--> Type-4

    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;
    //

    // int ar[6] = {1, 3, 5, 7, 9, 0};
    // vector<int> v(ar, ar + 6); //--> Type-5

    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;

    return 0;
}
