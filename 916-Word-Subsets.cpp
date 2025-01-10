class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> subsets;
        int maxFreq[26] = {0};
        int currentFreq[26];
        for (const string& word : words2) {
            memset(currentFreq, 0, sizeof currentFreq);
            for (const char& ch : word)
                currentFreq[ch - 'a']++;
            for (int i = 0; i < 26; ++i)
                maxFreq[i] = max(maxFreq[i], currentFreq[i]);
        }
        for (const string& word : words1) {
            bool flag = true;
            memset(currentFreq, 0, sizeof currentFreq);
            for (const char& ch : word)
                currentFreq[ch - 'a']++;
            for (int i = 0; i < 26; ++i)
                if (currentFreq[i] < maxFreq[i]) {
                    flag = false;
                    break;
                }
            if (flag)
                subsets.push_back(word);
        }
        return subsets;
    }
};