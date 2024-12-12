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
    vector<int> bfs(TreeNode* node) {
        if (!node)
            return {};

        queue<TreeNode*> q;
        vector<int> viewedNodes;
        q.push(node);

        int count = 1, previouslyAdded = 0;
        while (!q.empty()) {
            TreeNode* currentNode = q.front();
            q.pop();

            if (currentNode->left) {
                q.push(currentNode->left);
            }
            if (currentNode->right) {
                q.push(currentNode->right);
            }

            if (count == 1) {
                viewedNodes.push_back(currentNode->val);
                count = q.size();
            } else
                count--;
        }
        return viewedNodes;
    }

public:
    vector<int> rightSideView(TreeNode* root) { return bfs(root); }
};