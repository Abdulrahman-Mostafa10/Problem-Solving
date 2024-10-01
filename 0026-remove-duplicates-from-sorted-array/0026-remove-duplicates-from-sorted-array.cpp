class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = -101, cnt = 0, idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != current) {
                current = nums[idx++] = nums[i], cnt++;
            }
        }
        nums.resize(cnt);
        return cnt;
    }
};