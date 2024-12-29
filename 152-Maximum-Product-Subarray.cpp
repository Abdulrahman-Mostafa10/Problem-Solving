class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref = 0, suf = 0, n = nums.size(), ans = INT_MIN;
        for (int i = 0; i < n; ++i) {
            if (!pref)
                pref = 1;
            if (!suf)
                suf = 1;
            pref *= nums[i], suf *= nums[n - i - 1], ans = max({ans, pref, suf});
        }
        return ans;
    }
};