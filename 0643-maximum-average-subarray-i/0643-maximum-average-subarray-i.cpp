class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if (nums.size() == 1)
            return nums[0];
        vector<int> pref(nums.size());
        pref[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i)
            pref[i] = nums[i] + pref[i - 1];
        int mx = pref[k - 1];
        for (int i = k; i < nums.size(); ++i) {
            mx = max(mx, pref[i] - pref[i - k]);
        }
        return (mx * 1.) / k;
    }
};