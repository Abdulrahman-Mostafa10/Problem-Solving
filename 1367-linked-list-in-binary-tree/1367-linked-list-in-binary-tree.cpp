/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool matchList(TreeNode* node, ListNode* head) {
        if (!head)
            return true;
        if (!node || node->val != head->val)
            return false;
        return matchList(node->left, head->next) ||
               matchList(node->right, head->next);
    }
    bool dfs(TreeNode* node, ListNode* head) {
        if (!node)
            return false;
        if (matchList(node, head))
            return true;
        return dfs(node->left, head) || dfs(node->right, head);
    }

public:
    bool isSubPath(ListNode* head, TreeNode* root) { return dfs(root, head); }
};