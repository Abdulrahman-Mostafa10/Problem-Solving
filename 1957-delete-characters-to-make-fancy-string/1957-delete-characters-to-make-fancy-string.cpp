class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();
        vector<bool> vis(n);
        vector<int> pref(n, 1);
        string result = "";
        result += s[0];
        for (int i = 1; i < n; ++i) {
            if (s[i] == s[i - 1])
                pref[i] += pref[i - 1];
        }
        for (int i = 1; i < n; ++i) {
            if (pref[i] < 3)
                result += s[i];
        }
        return result;
    }
};