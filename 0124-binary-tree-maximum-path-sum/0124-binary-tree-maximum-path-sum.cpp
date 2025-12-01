/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int max_sum;
    int solve(TreeNode* root)
    {
        if(root==NULL)
        return 0;

        int l=solve(root->left);
        int r=solve(root->right);
        
        int lower=l+r+root->val;
        int anyoneside=max(l,r)+root->val;
        int onlynode=root->val;
        
        max_sum=max({max_sum,lower,anyoneside,onlynode});

        return max(anyoneside,onlynode);
    }
    int maxPathSum(TreeNode* root) {
        max_sum=INT_MIN;
        solve(root);
        return max_sum;
    }
};