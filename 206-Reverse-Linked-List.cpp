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
class Solution {
private:
    ListNode* recursiveReverse(ListNode* node) {
        if (!node->next) {
            return node;
        }

        ListNode* newHead = recursiveReverse(node->next);
        node->next->next = node;
        node->next = nullptr;
        return newHead;
    }

public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next)
            return head;

        return recursiveReverse(head);
    }
};