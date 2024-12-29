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
    int goodNodes(TreeNode* root) {
        if (!root)
            return 0;

        int goodNodes = 0;
        stack<pair<TreeNode*, int>> st;
        st.push({root, root->val});

        while (!st.empty()) {
            auto [node, maxValue] = st.top();
            st.pop();

            if (node->val >= maxValue)
                ++goodNodes;

            maxValue = max(maxValue, node->val);

            if (node->left)
                st.push({node->left, maxValue});
            if (node->right)
                st.push({node->right, maxValue});
        }
        return goodNodes;
    }
};