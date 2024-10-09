//--> Delete From Heap

#include <bits/stdc++.h>
using namespace std;

void heap_max(vector<int> &v, int x)
{
    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int p = (cur_idx - 1) / 2;

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

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int cur = 0;

    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;

        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            //--> 2 tai ase--------------------------------------------------------
            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
                break;
        }
        else if (left_idx <= last_idx)
        {
            //--> left ase--------------------------------------------------------
            if (v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else
                break;
        }
        else if (right_idx <= last_idx)
        {
            //--> right ase--------------------------------------------------------
            if (v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
                break;
        }
        else
            break;
    }
}

void delete_min_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int cur = 0;

    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;

        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            //--> 2 tai ase--------------------------------------------------------
            if (v[left_idx] <= v[right_idx] && v[left_idx] < v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if (v[right_idx] <= v[left_idx] && v[right_idx] < v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
                break;
        }
        else if (left_idx <= last_idx)
        {
            //--> left ase--------------------------------------------------------
            if (v[left_idx] < v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else
                break;
        }
        else if (right_idx <= last_idx)
        {
            //--> right ase--------------------------------------------------------
            if (v[right_idx] < v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
                break;
        }
        else
            break;
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
        heap_min(v, x); //--> O(logN)
    }

    delete_min_heap(v);

    for (auto u : v)
        cout << u << " ";
    cout << endl;

    return 0;
}

