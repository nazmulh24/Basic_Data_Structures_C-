
//--> Count Number of Node...

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

int leftSum(Node *root, bool isLeft = false)
{
    if (root == NULL)
        return 0;

    // If this is a left node, add its value to the sum
    int sum = (isLeft) ? root->val : 0;

    // Recursively sum the left and right children
    sum += leftSum(root->left, true);
    sum += leftSum(root->right, false);

    return sum;
}

void sum(Node *root, long long &ans)
{
    if (root == NULL)
        return;

    if (root->left)
        ans += root->left->val;

    sum(root->left, ans);
    sum(root->right, ans);
}

int main()
{
    Node *root = input_tree();

    long long ans = 0;
    sum(root, ans);
    cout << root->val + ans << endl;

    cout << root->val + leftSum(root);

    return 0;
}

