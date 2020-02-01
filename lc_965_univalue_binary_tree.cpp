/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool checkValue(TreeNode *root, const int val) {
        if (!root) {
            return true;
        } else if (root->val != val) {
            return false;
        }
        return (checkValue(root->left, val) &
            checkValue(root->right, val));
    }
    
    bool isUnivalTree(TreeNode* root) {
        if (!root) {
            return false;
        }
        return checkValue(root, root->val);
    }
};
