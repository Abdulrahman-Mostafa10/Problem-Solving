class Solution {
private:
    const int MOD = 7 + 1e9;
    int rec(vector<int>& dp, int low, int high, int zero, int one,
            int current = 0) {
        if (current > high)
            return 0;
        if (dp[current] != -1)
            return dp[current];

        return dp[current] =
                   (((current >= low) ? 1 : 0) +
                    rec(dp, low, high, zero, one, current + zero) % MOD +
                    rec(dp, low, high, zero, one, current + one) % MOD) %
                   MOD;
    }

public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1, -1);
        return rec(dp, low, high, zero, one);
    }
};