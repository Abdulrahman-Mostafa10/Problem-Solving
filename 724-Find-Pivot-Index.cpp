class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> lpref(nums.size()), rpref(nums.size());
        lpref[0] = nums[0];
        rpref[nums.size() - 1] = nums[nums.size() - 1];
        for (int i = 1; i < nums.size(); ++i) {
            lpref[i] += lpref[i - 1] + nums[i];
            rpref[nums.size() - i - 1] +=
                rpref[nums.size() - i] + nums[nums.size() - i - 1];
        }
        for (int i = 0; i < nums.size(); ++i)
            if (rpref[i] == lpref[i])
                return i;
        return -1;
    }
};