//--> Search in BST

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

bool bst_search(Node *root, int x)
{
    if (root == NULL)
        return false;

    if (root->val == x)
        return true;

    if (root->val < x)
        return bst_search(root->right, x);
    if (root->val > x)
        return bst_search(root->left, x);
}

int main()
{
    Node *root = input_levelOrder();

    int x;
    cin >> x;

    bool flag = bst_search(root, x);

    if (flag)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
