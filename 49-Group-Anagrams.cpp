class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> v;
        vector<pair<unordered_map<char, int>, bool>> freq(n);

        for (int i = 0; i < n; ++i) {
            unordered_map<char, int> mp;
            for (char c : strs[i]) {
                mp[c]++;
            }
            freq[i] = {mp, false};
        }

        for (int i = 0; i < n; ++i) {
            if (freq[i].second) continue;
            vector<string> group = {strs[i]};

            for (int j = i + 1; j < n; ++j) {
                if (!freq[j].second && freq[i].first == freq[j].first) {
                    freq[j].second = true;
                    group.push_back(strs[j]);
                }
            }

            v.push_back(group);
        }

        return v;
    }
};
