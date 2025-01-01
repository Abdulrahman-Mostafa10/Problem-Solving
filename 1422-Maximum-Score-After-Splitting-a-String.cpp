class Solution {
public:
    int maxScore(string s) {
        vector<int> zpref(s.size() + 1), opref(s.size() + 1);
        for (int i = 1; i < s.size() + 1; ++i) {
            if (s[i - 1] == '0') {
                opref[i] = opref[i - 1];
                zpref[i] = 1 + zpref[i - 1];
            } else {
                zpref[i] = zpref[i - 1];
                opref[i] = 1 + opref[i - 1];
            }
        }
        int maxScore = 0;
        for (int i = 1; i < s.size(); ++i)
            maxScore = max(zpref[i] + opref[s.size()] - opref[i], maxScore);
        return maxScore;
    }
};