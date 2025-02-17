class Solution {
private:
    void backtrack(unordered_map<char, int>& mp, int& res) {
        for (auto& m : mp) {
            if (m.second) {
                res++;
                m.second--;
                backtrack(mp, res);
                m.second++;
            }
        }
    }

public:
    int numTilePossibilities(string tiles) {
        unordered_map<char, int> mp;
        for (char c : tiles)
            mp[c]++;
        int res = 0;
        backtrack(mp, res);
        return res;
    }
};