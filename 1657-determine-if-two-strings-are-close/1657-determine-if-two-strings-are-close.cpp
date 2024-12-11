class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size())
            return false;
            
        map<char, int> mp1, mp2;

        for (char ch : word1)
            mp1[ch]++;
        for (char ch : word2)
            mp2[ch]++;

        for (char ch : word1)
            if (!mp2.contains(ch))
                return false;

        map<int, int> firstDistincts, secondDistincts;
        int sum1 = 0, sum2 = 0;

        for (auto& [key, value] : mp1)
            firstDistincts[value]++, sum1 += value;
        for (auto& [key, value] : mp2)
            secondDistincts[value]++, sum2 += value;

        for (auto& [key, value] : firstDistincts)
            if (!secondDistincts.contains(key) ||
                secondDistincts[key] != firstDistincts[key])
                return false;
        for (auto& [key, value] : secondDistincts)
            if (!firstDistincts.contains(key) ||
                secondDistincts[key] != firstDistincts[key])
                return false;

        return true;
    }
};