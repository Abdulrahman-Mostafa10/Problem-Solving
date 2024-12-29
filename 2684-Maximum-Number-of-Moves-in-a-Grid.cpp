class Solution {
private:
    int n, m;
    bool isValid(int i, int j) { return i >= 0 && i < m && j >= 0 && j < n; }

public:
    int maxMoves(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n));

        for (int j = n - 2; j >= 0; --j) {
            for (int i = m - 1; i >= 0; --i) {
                for (int k = -1; k < 2; ++k) {
                    if (isValid(i + k, j + 1) &&
                        (grid[i][j] < grid[i + k][j + 1])) {
                        dp[i][j] = max(dp[i][j], dp[i + k][j + 1] + 1);
                    }
                }
            }
        }

        int mx = -1;
        for (int i = 0; i < m; ++i)
            mx = max(dp[i][0], mx);

        return mx;
    }
};