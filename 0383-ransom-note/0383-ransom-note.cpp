class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mpn, mpm;
        for (char ch : ransomNote)
            mpn[ch]++;

        for (char ch : magazine)
            mpm[ch]++;

        for (char ch : ransomNote)
            if (!mpm.contains(ch) || mpn[ch] > mpm[ch])
                return false;
        return true;
    }
};