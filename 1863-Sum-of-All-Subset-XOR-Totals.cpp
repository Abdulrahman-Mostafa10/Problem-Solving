class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int masks = 1 << nums.size();
        int sum = 0;
        for (int mask = 0; mask < masks; ++mask) {
            int subSum = 0;
            for (int bit = 0; bit < nums.size(); ++bit) {
                if (mask & (1 << bit))
                    subSum ^= nums[bit];
            }
            sum += subSum;
        }

        return sum;
    }
};