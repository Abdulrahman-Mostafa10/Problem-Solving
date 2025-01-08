class Solution {
private:
    bool isPrefixAndSuffix(const string& s1, const string& s2) {
        return s2.substr(0, s1.size()) == s1 &&
               s2.substr(s2.size() - s1.size(), s1.size()) == s1;
    }

public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int result = 0;
        for (int i = 0; i < words.size() - 1; ++i) {
            for (int j = i + 1; j < words.size(); ++j) {
                result += isPrefixAndSuffix(words[i], words[j]);
            }
        }
        return result;
    }
};