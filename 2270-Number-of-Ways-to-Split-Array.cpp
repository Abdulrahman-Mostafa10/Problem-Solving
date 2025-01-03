class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count = 0;
        long long sum = accumulate(nums.begin(), nums.end(), 0LL), current = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            current += nums[i];
            (2 * current >= sum) ? count++ : 0;
        }
        return count;
    }
};