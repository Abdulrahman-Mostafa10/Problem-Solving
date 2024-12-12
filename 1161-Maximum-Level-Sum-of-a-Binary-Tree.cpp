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
    int bfs(TreeNode* root) {
        queue<TreeNode*> q;
        pair<int, long long> maxSum = {INT_MAX, LLONG_MIN};
        int currentLevel = 0;

        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            long long currentLevelSum = 0;

            currentLevel++;

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = q.front();
                q.pop();

                currentLevelSum += currentNode->val;

                if (currentNode->left)
                    q.push(currentNode->left);
                if (currentNode->right)
                    q.push(currentNode->right);
            }
            
            if (maxSum.second < currentLevelSum)
                maxSum = {currentLevel, currentLevelSum};
        }
        return maxSum.first;
    }

public:
    int maxLevelSum(TreeNode* root) { return bfs(root); }
};