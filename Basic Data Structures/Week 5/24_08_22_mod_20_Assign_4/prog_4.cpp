//--> Level Nodes

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

void print_level(Node *root, int level)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    int c_level = 0;

    while (!q.empty())
    {
        int l_Size = q.size();
        if (c_level == level)
        {
            for (int i = 0; i < l_Size; i++)
            {
                Node *node = q.front();
                q.pop();
                cout << node->val << " ";
            }
            cout << endl;
            return;
        }

        for (int i = 0; i < l_Size; i++)
        {
            Node *node = q.front();
            q.pop();
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        c_level++;
    }
    cout << "Invalid" << endl;
}

int main()
{
    Node *root = input_levelOrder();

    int level;
    cin >> level;

    print_level(root, level);

    return 0;
}
