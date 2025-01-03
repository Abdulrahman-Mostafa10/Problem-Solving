class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long> pref(nums.size());
        pref.shrink_to_fit();
        pref[0] = nums[0];
        int count = 0;
        for (int i = 1; i < pref.size(); ++i)
            pref[i] = pref[i - 1] + nums[i];
        for (int i = 0; i < pref.size() - 1; ++i) {
            if (pref[i] * 2 >= pref[pref.size() - 1])
                count++;
        }
        return count;
    }
};