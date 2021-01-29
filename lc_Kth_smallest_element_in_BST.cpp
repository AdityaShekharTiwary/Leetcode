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
    vector<int> solve(TreeNode* root,vector<int> &arr){
        if(root){
            solve(root->left,arr);
            arr.push_back(root->val);
            solve(root->right,arr);
        }
        return arr;
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int>arr;
        if(!root) return 0;
        solve(root,arr);
        return arr[k-1];
    }
};
