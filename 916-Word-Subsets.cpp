class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> subsets;
        vector<int> maxFreq(26, 0);
        for (const string& word : words2) {
            vector<int> currentFreq(26, 0);
            for (const char& ch : word)
                currentFreq[ch - 'a']++;
            for (int i = 0; i < 26; ++i)
                maxFreq[i] = max(maxFreq[i], currentFreq[i]);
        }
        for (const string& word : words1) {
            bool flag = true;
            vector<int> currentFreq(26, 0);
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