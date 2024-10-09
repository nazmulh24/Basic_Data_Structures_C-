//--> Remember Previous Queries?

#include <bits/stdc++.h>
using namespace std;

void delete_list(list<int> &myList, int pos)
{
    if (pos < 0 || pos >= myList.size())
        return;
    auto it = myList.begin();
    advance(it, pos);
    myList.erase(it);
}

void print_n(list<int> &myList)
{
    cout << "L -> ";
    for (int val : myList)
        cout << val << " ";
    cout << endl;
}

void print_r(list<int> &myList)
{
    cout << "R -> ";
    for (auto it = myList.rbegin(); it != myList.rend(); ++it)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    list<int> myList;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
            myList.push_front(v);
        else if (x == 1)
            myList.push_back(v);
        else if (x == 2)
            delete_list(myList, v);

        print_n(myList);
        print_r(myList);
    }

    return 0;
}
