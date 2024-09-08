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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* ptr = head;
        vector<ListNode*> parts(k);
        while (ptr)
            n++, ptr = ptr->next;
        ptr = head;
        if (n <= k) {
            for (int i = 0; i < n; ++i)
                parts[i] = new ListNode(ptr->val), ptr = ptr->next;
            if (k > n)
                for (int i = n; i < k; ++i)
                    parts[i] = nullptr;
        } else {
            int subParts, part = 0, totalParts = k;
            ListNode* curr;
            while (n % k) {
                subParts = n / k + 1;
                parts[part] = new ListNode(ptr->val);
                curr = parts[part];
                ptr = ptr->next;
                for (int i = 1; i < subParts; ++i) {
                    curr->next = ptr;
                    curr = curr->next;
                    ptr = ptr->next;
                }
                curr->next = nullptr;
                k--, n -= subParts, part++;
            }
            subParts = n / k;
            for (int i = part; i < totalParts; ++i) {
                parts[i] = new ListNode(ptr->val);
                curr = parts[i];
                ptr = ptr->next;
                for (int i = 1; i < subParts; ++i) {
                    curr->next = ptr;
                    curr = curr->next;
                    ptr = ptr->next;
                }
                curr->next = nullptr;
            }
        }
        return parts;
    }
};