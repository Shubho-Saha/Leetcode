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

bool isSame(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL && root2 == NULL) return true;
    if(root1 == NULL || root2 == NULL ) return false;
    bool l = isSame(root1->left, root2->left);
    bool r = isSame(root1->right, root2->right);
    bool c = (root1->val == root2->val);
    return (l && r && c);
}

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        return isSame(p, q);

        // queue<TreeNode*> q1, q2;

        // if(p) q1.push(p);
        // if(q) q2.push(q);
        // bool flag = true;
        // while(!q1.empty() && !q2.empty())
        // {
        //     TreeNode *parent1 = q1.front();
        //     TreeNode *parent2 = q2.front();
        //     q1.pop();
        //     q2.pop();

        //     if (parent1->val != parent2->val)
        //     {
        //         cout<<"check 1"<<endl;
        //         return false;
        //     }
        //     if (parent1->left && parent2->left) {
        //         if (parent1->left->val != parent2->left->val) {
        //             cout<<"check 2"<<endl;
        //             return false;
        //         }
        //     } 
        //     if ((parent1->left && !parent2->left) || (!parent1->left && parent2->left)) {
        //         return false;
        //     }

        //     if (parent1->right && parent2->right){
        //         if(parent1->right->val != parent2->right->val){
        //             cout<<"check 4"<<endl;
        //             return false;
        //         }
        //     } 
        //     if ((parent1->right && !parent2->right) || (!parent1->right && parent2->right)) {
        //         return false;
        //     }


        //     if (parent1->left) q1.push(parent1->left);
        //     if (parent1->right) q1.push(parent1->right);
        //     if (parent2->left) q2.push(parent2->left);
        //     if (parent2->right) q2.push(parent2->right);
        // }

        // if (!q1.empty() || !q2.empty()) {
        //     cout<<"check 6"<<endl;
        //     return false;
        // } 
        // return true;

        

        
    }
};