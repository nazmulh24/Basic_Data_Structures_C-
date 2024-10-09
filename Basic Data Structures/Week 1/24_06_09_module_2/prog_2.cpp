#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    // cout << v.max_size() << endl;

    // cout << v.capacity() << endl; //--> capacity-0
    // v.push_back(10);
    // cout << v.capacity() << endl; //--> capacity-1
    // v.push_back(20);
    // cout << v.capacity() << endl; //--> capacity-2
    // v.push_back(30);
    // cout << v.capacity() << endl; //--> capacity-4 __ element_3
    // v.push_back(40);
    // cout << v.capacity() << endl; //--> capacity-4 __ element_4
    // v.push_back(50);
    // cout << v.capacity() << endl; //--> capacity-8 __ element_5
    // //--> if (element > capacity) --> capacity * 2

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.clear();  //--> Memory delete hoy nai!!!
    // cout << v.size() << endl;
    // // for (int i = 0; i < v.size(); i++)
    // //     cout << v[i] << " ";
    // cout << v[3] << endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.resize(2); //--> Size will change x. x=2
    // v.resize(7); //--> Another 5 element is 0...
    v.resize(7, 100); //--> Another 5 element is 100...
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
