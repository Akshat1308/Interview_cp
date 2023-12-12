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
vector<vector<int>> BFS(TreeNode *root)
{
    vector<vector<int>> answer;
    if (root == NULL)
        return answer;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        vector<int> level;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            TreeNode *node = q.front();
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            level.push_back(node->data);
        }
        answer.push_back(level);
    }
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
    vector<vector<int>> answer = BFS(root);
    for (auto i : answer)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
    }
    return 0;
}