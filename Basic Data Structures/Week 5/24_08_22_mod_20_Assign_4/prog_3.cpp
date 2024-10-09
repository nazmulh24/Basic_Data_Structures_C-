
//--> Perfect Binary Tree

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

int Height_(Node *root)
{
    if (root == NULL)
        return 0;

    int l = Height_(root->left);
    int r = Height_(root->right);

    return max(l, r) + 1;
}

int count_Node(Node *root)
{
    if (root == NULL)
        return 0;

    int l = count_Node(root->left);
    int r = count_Node(root->right);

    return l + r + 1;
}

bool P_Binary_Tree(Node *root)
{
    int height = Height_(root) - 1;
    int t_Node = count_Node(root);
    int f_Node = pow(2, height + 1) - 1;
    return t_Node == f_Node;
}

int main()
{
    Node *root = input_levelOrder();

    if (P_Binary_Tree(root))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
