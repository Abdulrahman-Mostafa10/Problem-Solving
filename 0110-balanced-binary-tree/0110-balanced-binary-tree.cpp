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
    int height(TreeNode* root) {
        if (!root)
            return 0;
        int leftHeight = height(root->left), rightHeight = height(root->right);
        if (leftHeight == INT_MAX || rightHeight == INT_MAX ||
            abs(leftHeight - rightHeight) >= 2) {
            return INT_MAX;
        }
        return 1 + max(leftHeight, rightHeight);
    }

public:
    bool isBalanced(TreeNode* root) { return height(root) != INT_MAX; }
};