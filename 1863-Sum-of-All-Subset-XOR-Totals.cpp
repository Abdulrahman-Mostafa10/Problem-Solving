class Solution {
public:
    vector<int> sub;
    int ans = 0;
    void generateCombinations(vector<int>& nums, int index) {
        if (index == nums.size()) {
            if (!sub.empty()) {
                int xory = 0;
                for (auto it : sub)
                    xory ^= it;
                ans += xory;
            }
            return;
        }
        sub.push_back(nums[index]);
        generateCombinations(nums, index + 1);
        sub.pop_back();
        generateCombinations(nums, index + 1);
    }

    int subsetXORSum(vector<int>& nums) {
        generateCombinations(nums, 0);
        return ans;
    }
};