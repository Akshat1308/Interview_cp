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
int maxPathSum(TreeNode *root, int &maxi)
{
    if (root == NULL)
        return 0;
    int maxLeft = maxPathSum(root->left, maxi);
    int maxRight = maxPathSum(root->right, maxi);
    maxi = max(maxi, maxLeft + maxRight + root->data);
    return root->data + max(maxLeft, maxRight);
}
int callerFunction(TreeNode *root)
{
    int answer;
    maxPathSum(root, answer);
    return answer;
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
    cout << callerFunction(root);
}