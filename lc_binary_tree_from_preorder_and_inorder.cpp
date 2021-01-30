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
    int idx=0;
    map<int,int> m;

   TreeNode* solve(vector<int> &preorder,vector<int> &inorder,int lb,int ub){
        if(lb>ub) return NULL;
        TreeNode* res=new TreeNode(preorder[idx++]);
        if(lb==ub) return res;
        int mid=m[res->val];
        res->left=solve(preorder,inorder,lb,mid-1);
        res->right=solve(preorder,inorder,mid+1,ub);
        return res;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        idx=0;
        m.clear();
        int n=preorder.size();
        for(int i=0;i<n;i++) m[inorder[i]]=i;
        TreeNode* root=solve(preorder,inorder,0,n-1);
        return root;
    }
};
