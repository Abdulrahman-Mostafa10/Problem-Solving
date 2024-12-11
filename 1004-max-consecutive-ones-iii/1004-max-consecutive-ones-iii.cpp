class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, maxOnes = 0, zeros = 0, n = nums.size();
        for (int r = 0; r < n; ++r) {
            if (!nums[r])
                zeros++;
            while (zeros > k) {
                if (!nums[l])
                    zeros--;
                l++;
            }
            maxOnes = max(maxOnes, r - l + 1);
        }
        return maxOnes;
    }
};