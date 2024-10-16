class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int idx = 0, mxSize = max(word1.length(), word2.length());
        string s = "";
        while (idx != mxSize) {
            if (idx < word1.length())
                s += word1[idx];
            if (idx < word2.length())
                s += word2[idx];
            idx++;
        }
        return s;
    }
};