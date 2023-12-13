#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        data = val;
        left = right = NULL;
    }
};
int Modified_height_function(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int lh = Modified_height_function(root->left);
    if (lh == -1)
        return -1;
    int rh = Modified_height_function(root->right);
    if (lh == -1)
        return -1;

    if (abs(lh - rh) > 1)
        return -1;
    return 1 + max(lh, rh);
}
bool idBalanced(TreeNode *root)
{
    return Modified_height_function(root) != -1;
}
int main()
{
    // Example usage:
    // Creating a simple binary tree
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
}