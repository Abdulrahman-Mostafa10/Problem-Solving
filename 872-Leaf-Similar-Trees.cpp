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
    vector<int> firstLeaves, secondLeaves;
    bool isFirst = 1;

    void dfs(TreeNode* root) {
        if (!root->left && !root->right) {
            isFirst ? firstLeaves.push_back(root->val)
                    : secondLeaves.push_back(root->val);
            return;
        }

        if (root->left)
            dfs(root->left);
        if (root->right)
            dfs(root->right);
    }

public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs(root1);
        isFirst = 0;
        dfs(root2);
        return firstLeaves == secondLeaves;
    }
};