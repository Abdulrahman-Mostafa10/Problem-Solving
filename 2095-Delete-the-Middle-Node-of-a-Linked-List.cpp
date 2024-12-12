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
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head)
            return nullptr;
        ListNode* p = head;
        int n = 0, index = 0;
        while (p)
            n++, p = p->next;
        n >>= 1;
        p = head;
        while (p) {
            if (index == n) {
                return nullptr;
            }
            if (index + 1 == n) {
                ListNode* targetNode = p->next;
                p->next = targetNode->next;
                delete targetNode;
                break;
            }
            index++, p = p->next;
        }
        return head;
    }
};