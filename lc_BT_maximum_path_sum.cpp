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
    int max_val;
public:
    int maxPathSum(TreeNode* root) {
        max_val=INT_MIN;
        pathSum(root);
        return max_val;
    }

    int pathSum(TreeNode* root){
        if(!root) return 0;

        int left=max(0,pathSum(root->left));

        int right=max(0,pathSum(root->right));

        max_val=max(max_val,left+right+root->val);

        return max(left,right)+root->val;
    }
};
