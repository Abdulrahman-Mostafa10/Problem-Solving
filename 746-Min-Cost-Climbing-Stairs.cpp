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
        return min(rec(cost, 0), rec(cost, 1));
    }
};