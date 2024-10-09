//--> STL MAP

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    // mp.insert({"Naazmul Hossain", 4});
    // mp.insert({"Arefin Ahmed", 10});
    // mp.insert({"Nayeem", 20});
    // mp.insert({"Orin", 30});

    mp["Naazmul Hossain"] = 4; //--> O(logN)
    mp["Arefin Ahmed"] = 10;
    mp["Nayeem"] = 20;
    mp["Orin"] = 30;

    // for (auto it = mp.begin(); it != mp.end(); it++)
    //     cout << it->first << " " << it->second << endl;
    // cout << endl;

    for (auto u : mp)
        cout << u.first << " " << u.second << endl; //--> O(logN)
    cout << endl;

    // cout << mp["Orin"] << endl;
    // cout << mp["Kuddus"] << endl; //--> Na Thakle 0 dibe..

    if (mp.count("Kuddus")) //--> Aser ki nai Check korar niyom
        cout << "Ase" << endl;
    else
        cout << "Nai" << endl;

    return 0;
}
