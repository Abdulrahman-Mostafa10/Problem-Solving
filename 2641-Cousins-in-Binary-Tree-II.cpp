class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        if (!root)
            return root;

        queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);
        vector<int> levelSums;

        while (!nodeQueue.empty()) {
            int levelSum = 0;
            int levelSize = nodeQueue.size();
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = nodeQueue.front();
                nodeQueue.pop();
                levelSum += currentNode->val;
                if (currentNode->left)
                    nodeQueue.push(currentNode->left);
                if (currentNode->right)
                    nodeQueue.push(currentNode->right);
            }
            levelSums.push_back(levelSum);
        }

        nodeQueue.push(root);
        int levelIndex = 1;
        root->val = 0;
        while (!nodeQueue.empty()) {
            int levelSize = nodeQueue.size();
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = nodeQueue.front();
                nodeQueue.pop();

                int siblingSum =
                    (currentNode->left ? currentNode->left->val : 0) +
                    (currentNode->right ? currentNode->right->val : 0);

                if (currentNode->left) {
                    currentNode->left->val = levelSums[levelIndex] - siblingSum;
                    nodeQueue.push(currentNode->left);
                }
                if (currentNode->right) {
                    currentNode->right->val =
                        levelSums[levelIndex] - siblingSum;
                    nodeQueue.push(currentNode->right);
                }
            }
            ++levelIndex;
        }

        return root;
    }
};