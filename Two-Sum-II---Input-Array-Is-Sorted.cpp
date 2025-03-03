class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while (l < r) {
            int complement = target - numbers[l];
            if (numbers[r] == complement)
                return {l + 1, r + 1};
            else if (numbers[r] < complement)
                l++;
            else
                r--;
        }
        return vector<int>{};
    }
};
