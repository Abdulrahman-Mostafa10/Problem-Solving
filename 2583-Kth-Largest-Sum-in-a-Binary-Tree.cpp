
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
    vector<long long> levelValues;

    void bfs(TreeNode* node) {
        queue<TreeNode*> q;
        q.push(node);
        while (!q.empty()) {
            long long values = 0, size = q.size();

            for (int i = 0; i < size; ++i) {
                TreeNode* currentNode = q.front();
                q.pop();
                values += currentNode->val;

                if (currentNode->left)
                    q.push(currentNode->left);
                if (currentNode->right)
                    q.push(currentNode->right);
            }
            levelValues.push_back(values);
        }
    }

public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        bfs(root);

        sort(levelValues.begin(), levelValues.end(), greater<>());

        auto it = levelValues.rbegin();
        if (k > levelValues.size())
            return -1;

        return levelValues[k - 1];
    }
};