class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size() - 1, mid;
        while (start < end) {
            mid = start + ((end - start) >> 1);
            if (nums[mid] > nums[mid + 1])
                end = mid;
            else
                start = mid + 1;
        }

        return start;
    }
};