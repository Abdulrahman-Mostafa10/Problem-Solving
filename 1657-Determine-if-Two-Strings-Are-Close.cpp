class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size())
            return false;

        vector<int> firstFrequency(26, 0), secondFrequency(26, 0);

        for (char ch : word1)
            firstFrequency[ch - 'a']++;
        for (char ch : word2)
            secondFrequency[ch - 'a']++;

        for (int i = 0; i < 26; ++i)
            if ((firstFrequency[i] > 0) != (secondFrequency[i] > 0))
                return false;

        sort(firstFrequency.begin(), firstFrequency.end());
        sort(secondFrequency.begin(), secondFrequency.end());

        return secondFrequency == firstFrequency;
    }
};