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
    void flatten(TreeNode* root) {
        TreeNode *head = nullptr;
        flattenWorker(root, head);
    }
private:
    void flattenWorker(TreeNode* root, TreeNode*& head) {
        if (root == nullptr) {
            return;
        }
        flattenWorker(root->right, head);
        flattenWorker(root->left, head);
        root->left = nullptr;
        root->right = head;
        head = root;
    }
};
