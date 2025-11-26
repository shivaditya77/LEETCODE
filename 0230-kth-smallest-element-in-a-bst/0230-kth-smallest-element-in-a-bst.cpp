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
// class Solution {
// public:
//      void iot(TreeNode* root,vector<int>&ans)
//     {
//         if(root==NULL)
//         {
//             return;
//         }
//         iot(root->left,ans);
//         ans.push_back(root->val);
//         iot(root->right,ans);
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int>ans;
//         iot(root,ans);
//         return ans[k-1];
//     }
// };


class Solution {
public:
     void iot(TreeNode* root,int &count,int &k,int &ans)
    {
        if(root==NULL)
        {
            return;
        }
        iot(root->left,count,k,ans);
        count++;
        if(count==k)
        {
            ans=root->val;
            return;
        }
        iot(root->right,count,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
        int count=0;
        iot(root,count,k,ans);
        return ans;
    }
};