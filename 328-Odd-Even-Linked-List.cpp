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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode *oddPtr = head, *evenPtr = head->next, *evenHead = evenPtr;
        while (evenPtr && evenPtr->next) {
            oddPtr->next = evenPtr->next;
            oddPtr = oddPtr->next;
            evenPtr->next = oddPtr->next;
            evenPtr = evenPtr->next;
        }
        oddPtr->next = evenHead;
        return head;
    }
};