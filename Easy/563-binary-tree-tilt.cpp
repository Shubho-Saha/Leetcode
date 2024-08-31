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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int sum = 0;
int tiltSum(TreeNode *root, int &sum)
{
    if (root == NULL)
        return 0;
    int l = tiltSum(root->left, sum);
    int r = tiltSum(root->right, sum);
    sum += abs(l - r);
    return l + r + root->val;
}
class Solution
{
public:
    int findTilt(TreeNode *root)
    {
        sum = 0;
        tiltSum(root, sum);
        return sum;
    }
};