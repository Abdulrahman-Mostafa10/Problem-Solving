class Solution {
public:
    long long coloredCells(int n) {
        long long total = 2LL * n * (n - 1) + 1;
        return total;
    }
};