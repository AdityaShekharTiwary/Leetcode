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
    void solve(TreeNode* root,vector<int> &res){
        if(root){
            solve(root->left,res);
            res.push_back(root->val);
            solve(root->right,res);
        }
    }
    int minDiffInBST(TreeNode* root) {
        if(!root) return 0;
        vector<int>res;
        solve(root,res);
        int curr_diff=0,diff=INT_MIN;
        for(int i=0;i<res.size()-1;i++){
            curr_diff=abs(res[i]-res[i+1]);
            if(curr_diff<diff) diff=curr_diff;
        }
        return diff;
    }
};
