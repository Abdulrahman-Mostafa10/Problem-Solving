class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        map<int, bool> occurences;
        int lastOccurence = 0;
        for (int num : arr)
            mp[num]++;
        for (auto& [key, value] : mp) {
            if (occurences.contains(value))
                return false;
            occurences[value] = true;
        }
        return true;
    }
};