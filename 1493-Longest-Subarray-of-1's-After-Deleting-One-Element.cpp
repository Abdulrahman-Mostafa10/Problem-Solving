class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxOnes = 0, l = 0, zeros = 0, n = nums.size();
        for (int r = 0; r < n; ++r) {
            if (!nums[r])
                zeros++;
            while (zeros > 1) {
                if (!nums[l])
                    zeros--;
                l++;
            }
            maxOnes = max(maxOnes, r - l);
        }
        return maxOnes;
    }
};