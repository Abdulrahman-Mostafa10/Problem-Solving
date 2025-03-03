class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0, i = 0;
        while (j < s.size() && i < t.size()) {
            if (t[i] == s[j])
                j++;
            i++;
        }
        return j == s.size();
    }
};