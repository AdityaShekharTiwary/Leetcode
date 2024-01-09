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
    void leafValue(TreeNode* node,string &s){
        if(!node) return;
        if(node->left==NULL && node->right==NULL) s+=node->val;
        leafValue(node->left,s);
        leafValue(node->right,s);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1="",s2="";
        leafValue(root1,s1);
        leafValue(root2,s2);
        // cout<<s1<<" "<<s2<<endl;
        return s1==s2;
    }
};