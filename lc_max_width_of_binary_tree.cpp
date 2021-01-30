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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        long long int res=1;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            long long int n=q.size();
            long long int start=q.front().second;
            long long int end=q.back().second;
            while(n--){
                TreeNode* temp=q.front().first;
                long long int idx= q.front().second;
                q.pop();
                if(temp->left) q.push({temp->left,2*idx+1});
                if(temp->right) q.push({temp->right,2*idx+2});

            }
            res=max(res,end-start+1);
        }
        return res;
    }
};
