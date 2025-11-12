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
Node *buildTree(vector<int> preOrder)
{
    idx++;
    if (idx >= preOrder.size() || preOrder[idx] == -1)
        return NULL;
    Node *root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);
    return root;
}

int ans = 0;
int height(Node *root)
{
    if (!root)
        return 0;
    int leftHt = height(root->left);
    int rightHt = height(root->right);
    ans = max(ans, leftHt + rightHt);
    return max(leftHt, rightHt) + 1;
}

int diameter(Node *root)
{
    height(root);
    return ans;
}

int main()
{

    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(preOrder);
    cout << "Diameter: " << diameter(root) << endl;
    return 0;
}