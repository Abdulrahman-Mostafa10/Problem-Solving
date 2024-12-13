class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> countingBits(n + 1);
        for (int i = 0; i <= n; ++i) {
            int num = i;
            while (num) {
                countingBits[i] += (num & 1);
                num >>= 1;
            }
        }
        return countingBits;
    }
};