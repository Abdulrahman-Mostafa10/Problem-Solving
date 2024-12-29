class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), result = 0;
        vector<vector<int>> dp(m, vector<int>(n));

        for (int i = 0; i < n; ++i)
            dp[m - 1][i] = matrix[m - 1][i];
        for (int i = 0; i < m; ++i)
            dp[i][n - 1] = matrix[i][n - 1];

        for (int i = m - 2; i >= 0; --i)
            for (int j = n - 2; j >= 0; --j)
                dp[i][j] =
                    (matrix[i][j])
                        ? min({dp[i][j + 1], dp[i + 1][j], dp[i + 1][j + 1]}) +
                              1
                        : matrix[i][j];

        for (int i = 0; i < m; ++i)
            result += accumulate(dp[i].begin(), dp[i].end(), 0);

        return result;
    }
};