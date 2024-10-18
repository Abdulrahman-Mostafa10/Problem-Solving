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
        mx = 0;
        for (auto n : nums)
            mx |= n;
        return rec(nums);
    }
};