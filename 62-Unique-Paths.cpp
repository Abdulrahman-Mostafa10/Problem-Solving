class Solution {
public:
    int uniquePaths(int m, int n) {
        long long result = 1;
        int totalSteps = m + n - 2;
        int downSteps = min(n, m) - 1;

        for (int i = 1; i <= downSteps; ++i) {
            result = result * (totalSteps - i + 1) / i;
        }

        return result;
    }
};