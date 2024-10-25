class Solution {
public:
    bool GoJump(const vector<int>& nums, vector<int>& dp, int i = 0) {
        if (i == nums.size())
            return false;
        if (i == nums.size() - 1)
            return true;
        if (dp[i] != -1)
            return dp[i];
        for (int j = 1; j <= nums[i]; ++j) {
            if (GoJump(nums, dp, i + j))
                return dp[i] = true;
        }
        return dp[i] = false;
    }

    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size() + 1, -1);
        GoJump(nums, dp);
        return dp[0];
    }
};