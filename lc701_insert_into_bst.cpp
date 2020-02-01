/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* insertIntoBST(struct TreeNode* root, int val){

        if (!root) {
            root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
            root->right = NULL;
            root->left = NULL;
            root->val = val;
            return root;
        } else if (val < root->val) {
            root->left = insertIntoBST(root->left, val);
        } else if (val > root->val) {
            root->right = insertIntoBST(root->right, val);
        }
        return root;
}
