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
    int recursiveCount(TreeNode* root, int maxValue) {
        if (!root)
            return 0;

        bool currentCount;
        (maxValue <= root->val) ? currentCount = 1 : currentCount = 0;
        maxValue = max(maxValue, root->val);

        return currentCount + recursiveCount(root->left, maxValue) +
               recursiveCount(root->right, maxValue);
    }

public:
    int goodNodes(TreeNode* root) { return recursiveCount(root, root->val); }
};