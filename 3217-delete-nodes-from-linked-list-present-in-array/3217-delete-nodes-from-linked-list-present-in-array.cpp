/**
 * Definition for singly-linked list->
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
    ListNode* rec(unordered_map<int, bool>& nums, ListNode* ptr) {
        if (!ptr)
            return nullptr;
        ListNode* nextPtr = rec(nums, ptr->next);
        if (nums[ptr->val]) {
            delete ptr;
            return nextPtr;
        }
        ptr->next = nextPtr;
        return ptr;
    }

public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* ptr = head;
        unordered_map<int, bool> mp;
        for (int num : nums)
            mp[num] = true;
        while (ptr) {
            if (mp.find(ptr->val) == mp.end())
                mp[ptr->val] = false;
            ptr = ptr->next;
        }
        return rec(mp, head);
    }
};