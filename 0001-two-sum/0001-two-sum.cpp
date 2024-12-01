class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); ++i)
            mp[nums[i]] = i;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (mp.contains(complement)) {
                if (mp[complement] != i)
                    return {mp[complement], i};
            }
        }
        return {-1, -1};
    }
};