#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;
// no->node
Node *buildTree(vector<int> preorder)
{

    idx++;
    if (idx >= preorder.size() || preorder[idx] == -1)
        return NULL;

    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

bool isIdentical(Node *root1, Node *root2)
{

    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    if (root1 == NULL || root2 == NULL)
    {

        return false;
    }

    bool isLeftsame = isIdentical(root1->left, root2->left);
    bool isRightSame = isIdentical(root1->right, root2->right);

    if (isLeftsame && isRightSame && (root1->data == root2->data))
        return true;

    else
        return false;
}
bool isSubtree(Node *root1, Node *root2)
{
    if (root1 == NULL || root2 == NULL)
    {
        return root1 == root2;
    }
    if (root1->data == root2->data && isIdentical(root1, root2))
    {
        return true;
    }
    return isSubtree(root1->left, root2) || isSubtree(root1->right, root2);
}
int main()
{
    vector<int> preorder1 = {1, 2, -1, -1, 3, 4, -1, 5, -1, -1};
    vector<int> preorder2 = {3, 4, -1, 5, -1, -1};
    Node *root1 = buildTree(preorder1);
    idx = -1;
    Node *root2 = buildTree(preorder2);
    idx = -1;
    cout << (isSubtree(root1, root2) ? "present" : "Not present") << endl;

    return 0;
}