class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        const int n = nums.size();
        vector<int> prf(n + 1);
        prf[0] = 0;
        int i;
        for (i = 1; i <= n; i++)
            prf[i] = prf[i - 1] + nums[i - 1];
        nums.clear();
        int dp[20001][3] = {0};
        for (i = k - 1; i < n; i++)
            dp[i][0] = prf[i + 1] - prf[i - k + 1];
        int m = dp[k - 1][0];
        for (i = (k << 1) - 1; i < n; i++) {
            dp[i][1] = m + prf[i + 1] - prf[i - k + 1];
            m = max(m, dp[i - k + 1][0]);
        }
        m = dp[k * 2 - 1][1];
        for (i = k * 3 - 1; i < n; i++) {
            dp[i][2] = m + prf[i + 1] - prf[i - k + 1];
            m = max(m, dp[i - k + 1][1]);
        }
        vector<int> arr(3, 0);
        m = 0;
        for (i = 0; i < n; i++)
            m = max(m, dp[i][2]);
        for (i = 0; i < n; i++) {
            if (dp[i][2] == m) {
                arr[2] = i - k + 1;
                break;
            }
        }
        m = 0;
        for (i = arr[2] - k; i >= k; i--) {
            if (dp[i + k - 1][1] >= m) {
                m = dp[i + k - 1][1];
                arr[1] = i;
            }
        }
        m = 0;
        for (i = arr[1] - k; i >= 0; i--) {
            if (dp[i + k - 1][0] >= m) {
                m = dp[i + k - 1][0];
                arr[0] = i;
            }
        }
        return arr;
    }
};
