#include <bits/stdc++.h>
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isUnivalTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        int rootVal = root->val;
        bool flag = true;
        while (!q.empty())
        {
            TreeNode *parent = q.front();
            q.pop();

            if (parent->val != rootVal)
            {
                flag = false;
                return flag;
            }
            if (parent->left)
                q.push(parent->left);
            if (parent->right)
                q.push(parent->right);
        }
        return flag;
    }
};