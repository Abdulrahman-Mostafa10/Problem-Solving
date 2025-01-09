class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for (const string& word : words)
            count += (word.substr(0, pref.size()) == pref);
        return count;
    }
};