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

	bool solve(TreeNode* root, TreeNode* min, TreeNode* max) {
		if (!root) return true;
		if (min && root->val <= min->val || max && root->val >= max->val) return false;
		return solve(root->left, min, root) && solve(root->right, root, max);

	}

	bool isValidBST(TreeNode* root) {
		return solve(root, NULL, NULL);
	}
};



//         stack<TreeNode*> st;
//         int left_child_val=INT_MIN;

//         while(!st.empty() || root!=nullptr){
//             while(!root){
//                 st.push(root);
//                 root=root->left;
//             }
//             root=st.top();
//             st.pop();
//             if(root->val<=left_child_val) return false;
//             left_child_val=root->val;
//             root=root->right;

//         }
//         return true;