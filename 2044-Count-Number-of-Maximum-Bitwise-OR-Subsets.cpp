class Solution {
private:
    int mx;
    int rec(const vector<int>& v, int prev = 0, int i = 0) {
        if (i == v.size())
            return 0;
        int currentResult = prev | v[i];
        bool isEqual = currentResult == mx;
        return isEqual + rec(v, currentResult, i + 1) + rec(v, prev, i + 1);
    }

public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxValue = 0, cnt = 0;
        for (int n : nums)
            maxValue |= n;
        for (int b = 0; b < (1 << nums.size()); ++b) {
            int currentBit = 0;
            for (int i = 0; i < nums.size(); ++i) {
                if (b & (1 << i))
                    currentBit |= nums[i];
            }
            if (currentBit == maxValue)
                cnt++;
        }
        return cnt;
    }
};