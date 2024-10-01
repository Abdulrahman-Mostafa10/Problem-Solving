class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = -1e4 - 1, cnt = 0, idx = 0, freq = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (freq < 2) {
                if (current != nums[i])
                    freq = 0;
                current = nums[idx++] = nums[i], cnt++, freq++;
            } else {
                if (current != nums[i])
                    current = nums[idx++] = nums[i], cnt++, freq = 1;
            }
        }
        nums.resize(cnt);
        return cnt;
    }
};