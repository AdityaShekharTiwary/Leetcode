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
    TreeNode* newroot, *curr;
public:
    TreeNode* increasingBST(TreeNode* root) {
        if (root == NULL) return NULL;
        increasingBST(root->left);
        
        if (newroot == NULL) { 
            newroot = new TreeNode(root->val);
            curr = newroot;
        }
        else {
            curr->right = new TreeNode(root->val);
            curr=curr->right;
        }
        
        increasingBST(root->right);
        return newroot;
    }
};