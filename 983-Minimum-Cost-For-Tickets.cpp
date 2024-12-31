class Solution {
private:
    int rec(const vector<int>& days, const vector<int>& costs,
            vector<vector<int>>& dp, int maxDay = 0, int i = 0) {
        if (i == days.size()) {
            return 0;
        }
        if (dp[i][maxDay] != -1)
            return dp[i][maxDay];
        return dp[i][maxDay] =
                   (maxDay >= days[i])
                       ? rec(days, costs, dp, maxDay, i + 1)
                       : min({costs[0] + rec(days, costs, dp, days[i], i + 1),
                              costs[1] +
                                  rec(days, costs, dp, days[i] + 6, i + 1),
                              costs[2] +
                                  rec(days, costs, dp, days[i] + 29, i + 1)});
    }

public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<vector<int>> dp(days.size() + 1, vector<int>(395, -1));
        return rec(days, costs, dp);
    }
};