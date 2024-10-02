class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> distincts;
        map<int, int> mp;
        int rank = 1;
        for (int n : arr)
            distincts.insert(n);
        for (int n : distincts)
            mp[n] = rank++;
        for (int& n : arr)
            n = mp[n];
        return arr;
    }
};