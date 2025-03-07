/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*>q;
        vector<int> v;
        int count=1;
        q.push(root);
        while(!q.empty()){
            TreeNode*node=q.front();
            q.pop();
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
            if(count == 1){
                v.push_back(node->val);
                count = q.size();
            }
            else
            count--;
        }
        return v;
    }
};