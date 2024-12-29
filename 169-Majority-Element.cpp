class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int n : nums)
            mp[n]++;
        int mx = -1, res;
        for (auto k : mp) {
            if (k.second > mx)
                res = k.first, mx = k.second;
        }
        return res;
    }
};