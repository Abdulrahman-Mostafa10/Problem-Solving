class Solution {
private:
    vector<int> dp;
    int rec(vector<int>& cost, int i) {
        if (i >= cost.size())
            return 0;
        if (dp[i] != -1)
            return dp[i];
        return dp[i] = cost[i] + min(rec(cost, i + 1), rec(cost, i + 2));
    }

public:
    int minCostClimbingStairs(vector<int>& cost) {
        dp.resize(cost.size() + 1, -1);
        dp[dp.size() - 1] = 0, dp[dp.size() - 2] = cost[cost.size() - 1];
        for (int i = dp.size() - 3; i >= 0; --i)
            dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);
        return min(dp[0], dp[1]);
    }
};