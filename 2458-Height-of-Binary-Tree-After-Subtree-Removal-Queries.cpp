class Solution {
public:
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        unordered_map<int, int> resultMap;
        unordered_map<TreeNode*, int> heightCache;

        dfs(root, 0, 0, resultMap, heightCache);

        vector<int> result(queries.size());
        for (int i = 0; i < queries.size(); i++) {
            result[i] = resultMap[queries[i]];
        }
        return result;
    }

private:
    int height(TreeNode* node, unordered_map<TreeNode*, int>& heightCache) {
        if (!node) {
            return -1;
        }

        if (heightCache.count(node)) {
            return heightCache[node];
        }

        int h = 1 + max(height(node->left, heightCache),
                        height(node->right, heightCache));
        heightCache[node] = h;
        return h;
    }

    void dfs(TreeNode* node, int depth, int maxVal,
             unordered_map<int, int>& resultMap,
             unordered_map<TreeNode*, int>& heightCache) {
        if (node == nullptr) {
            return;
        }

        resultMap[node->val] = maxVal;

        dfs(node->left, depth + 1,
            max(maxVal, depth + 1 + height(node->right, heightCache)),
            resultMap, heightCache);
        dfs(node->right, depth + 1,
            max(maxVal, depth + 1 + height(node->left, heightCache)), resultMap,
            heightCache);
    }
};