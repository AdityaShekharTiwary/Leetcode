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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return 0;
        else{
            bool ans=0;
            int subsum=sum-root->val;
            if(subsum==0 && root->left==NULL && root->right==NULL) return 1;
            if(root->left)
                ans=ans || hasPathSum(root->left,subsum);
            if(root->right)
                ans=ans || hasPathSum(root->right,subsum);
            return ans;
        }
    }
};
