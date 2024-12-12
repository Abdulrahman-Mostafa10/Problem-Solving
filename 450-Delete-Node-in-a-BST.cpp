/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* search(TreeNode* root) {
        while (root && root->left)
            root = root->left;
        return root;
    }

public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)
            return root;
        if (root->val == key) {
            if (!root->left) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            if (!root->right) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            TreeNode* leastSuccesscor = search(root->right);

            root->val = leastSuccesscor->val;
            root->right = deleteNode(root->right, root->val);
            return root;
        }

        TreeNode *leftNode = nullptr, *rightNode = nullptr;
        if (root->val > key)
            root->left = deleteNode(root->left, key);
        else
            root->right = deleteNode(root->right, key);

        return root;
    }
};