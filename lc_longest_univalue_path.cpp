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
    int ans=0;

    int longestUnivaluePath(TreeNode* root) {
        ans=0;
        solve(root);
        return ans;
    }

    int solve(TreeNode* root){
        if(!root) return 0;
        int left=solve(root->left);
        int right=solve(root->right);
        int l=0,r=0;
        if(root->left && root->left->val==root->val) l+=left+1;
        if(root->right && root->right->val==root->val) r+=right+1;
        ans=max(ans,l+r);
        return max(l,r);
    }
};
