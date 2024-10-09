//--> Print Outer Tree

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

void print_left(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
    {
        print_left(root->left);
        cout << root->left->val << " ";
    }
    else if (root->right)
    {
        print_left(root->right);
        cout << root->right->val << " ";
    }
}

void print_right(Node *root)
{
    if (root == NULL)
        return;

    if (root->right)
    {
        cout << root->right->val << " ";
        print_right(root->right);
    }
    else if (root->left)
    {
        cout << root->left->val << " ";
        print_right(root->left);
    }
}

void print_outer(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
        print_left(root);
    cout << root->val << " ";
    if (root->right)
        print_right(root);
}

int main()
{
    Node *root = input_levelOrder();

    print_outer(root);

    return 0;
}
