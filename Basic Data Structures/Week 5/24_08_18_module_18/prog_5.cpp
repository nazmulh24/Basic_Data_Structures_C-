
//--> Count Number of leaf Node...

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

Node *input_tree()
{
    int rr;
    cin >> rr;
    Node *root;
    root = (rr == -1) ? NULL : new Node(rr);

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

int max_hight(Node *root)
{
    if (root == NULL)
        return 0;

    int l = max_hight(root->left);
    int r = max_hight(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();

    int cnt = max_hight(root) - 1;

    cout << cnt << endl;

    return 0;
}
