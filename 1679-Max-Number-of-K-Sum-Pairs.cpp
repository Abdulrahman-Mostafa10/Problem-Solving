class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int, int> freq;
        int operations = 0;

        for (int num : nums) {
            freq[num]++;
        }

        for (auto& element : freq) {
            int num = element.first;
            int count = element.second;

            int complement = k - num;

            if (freq.count(complement)) {
                if (num == complement) {
                    operations += count / 2;
                } else {
                    int pairs = min(count, freq[complement]);
                    operations += pairs;

                    freq[num] -= pairs;
                    freq[complement] -= pairs;
                }
            }
        }

        return operations;
    }
};