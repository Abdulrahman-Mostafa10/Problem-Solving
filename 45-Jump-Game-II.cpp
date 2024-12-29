class Solution {
public:
    int rec(const vector<int>& nums, vector<int>& dp, int i = 0) {
        if (i >= nums.size())
            return INT_MAX;
        if (i == nums.size() - 1)
            return 0;
        if (dp[i] != INT_MAX)
            return dp[i];
        int mn = INT_MAX;
        for (int j = 1; j <= nums[i]; ++j)
            mn = min(mn, rec(nums, dp, i + j));

        return dp[i] = (mn < INT_MAX) ? mn + 1 : mn;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size() + 1, INT_MAX);
        return rec(nums, dp);
    }
};