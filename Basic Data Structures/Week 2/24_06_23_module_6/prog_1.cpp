#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    // *p = 20; //--> De-reference

    cout << &p << endl;

    // p = NULL; //--> De-reference kori nai...
}

int main()
{
    int val = 10;
    int *ptr = &val;

    fun(ptr);

    // cout << val << endl;
    // cout << *ptr << endl; //--> *ptr and val both are same...

    cout << &ptr << endl; //--> akhon p ar ptr same hoye gese...

    return 0;
}
