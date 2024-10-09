
//--> Sum Without Leaf

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

void sum_(Node *root, long long &ans)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        return;
    else
        ans += root->val;

    sum_(root->left, ans);
    sum_(root->right, ans);
}

int main()
{
    Node *root = input_levelOrder();

    long long ans = 0;

    sum_(root, ans);

    cout << ans << endl;

    return 0;
}
