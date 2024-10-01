class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty())
            return 0;
        if (nums.size() > 1)
            sort(nums.begin(), nums.end(), [&val](const int& a, const int& b) {
                return a != val && b == val;
            });
        int cnt = 0, i = 0;
        while (i < nums.size() && nums[i++] != val)
            cnt++;
        return cnt;
    }
};