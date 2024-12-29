class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mps, mpt;

        for (char ch : s)
            mps[ch]++;

        for (char ch : t)
            mpt[ch]++;

        for (char ch : t)
            if (mpt[ch] > mps[ch])
                return false;

        return s.size() == t.size();
    }
};