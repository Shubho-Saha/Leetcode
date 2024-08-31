#include <bits/stdc++.h>
using namespace std;

//   Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode* right) : val(x), left(left), right(right) {}
};


void leafNodes(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;
    leafNodes(root->left, v);
    leafNodes(root->right, v);
    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }
}

class Solution
{
public:
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> v1, v2;
        leafNodes(root1, v1);
        leafNodes(root2, v2);
        for (int x : v1)
        {
            cout << x << " ";
        }
        cout << endl;
        for (int z : v2)
        {
            cout << z << " ";
        }
        if (v1 == v2)
            return true;
        else
            return false;
    }
};