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
    int gcd(int a, int b) {
        if (!b)
            return a;
        return gcd(b, a % b);
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head->next)
            return head;
        ListNode* ptr = head;
        while (ptr->next) {
            ListNode* newNode =
                new ListNode(gcd(ptr->val, ptr->next->val), ptr->next);
            ptr->next = newNode, ptr = newNode->next;
        }
        return head;
    }
};