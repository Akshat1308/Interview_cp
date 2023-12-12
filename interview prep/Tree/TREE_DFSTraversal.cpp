#include <iostream>
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

void preorderTraversal(TreeNode *root)
{
    if (root == nullptr)

        return;

    cout << root->data << " ";

    preorderTraversal(root->left);

    preorderTraversal(root->right);
}
void inorderTraversal(TreeNode *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
void postorderTraversal(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
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

    // Perform preorder traversal
    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;
    cout << "IPostorder Traversal: ";
    postorderTraversal(root);
    return 0;
}
