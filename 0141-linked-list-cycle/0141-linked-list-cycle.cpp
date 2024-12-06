/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode *l = head, *r = head ? head->next : head;
        while (l && r) {
            if (r <= l)
                return true;
            l = l->next, r = r->next;
        }
        return false;
    }
};