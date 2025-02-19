class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (int n : nums)
            mp[n]++;
        priority_queue<pair<int, int>> pq;
        for (const auto& [key, value] : mp)
            pq.emplace(value, key);
        vector<int> v;
        while (!pq.empty() && k--) {
            v.emplace_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
