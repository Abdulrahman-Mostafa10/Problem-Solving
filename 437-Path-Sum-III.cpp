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
    int dfs(TreeNode* node, int targetSum,
            unordered_map<long long, int>& prefixSumMap, long long currentSum) {
        if (!node)
            return 0;

        currentSum += node->val;

        int pathCount = prefixSumMap[currentSum - targetSum];

        prefixSumMap[currentSum]++;

        pathCount += dfs(node->left, targetSum, prefixSumMap, currentSum);
        pathCount += dfs(node->right, targetSum, prefixSumMap, currentSum);

        prefixSumMap[currentSum]--;

        return pathCount;
    }

public:
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int> prefixSumMap;
        prefixSumMap[0] = 1;
        return dfs(root, targetSum, prefixSumMap, 0);
    }
};
