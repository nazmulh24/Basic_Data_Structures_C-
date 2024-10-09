
//--> Leaf Nodes

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_levelOrder()
{
    int rr;
    cin >> rr;
    Node *root;
    if (rr == -1)
        root = NULL;
    else
        root = new Node(rr);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;

        myLeft = (l == -1) ? NULL : new Node(l);
        myRight = (r == -1) ? NULL : new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void leaf_print(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL)
            v.push_back(f->val);

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = input_levelOrder();

    vector<int> v;

    leaf_print(root, v);

    reverse(v.begin(), v.end());

    for (auto u : v)
        cout << u << " ";
    cout << endl;

    return 0;
}
