class Solution {
private:
    int binarySearch(vector<int>& potions, long long spell, long long success) {
        int start = 0, end = potions.size() - 1, mid, count = potions.size();
        while (start <= end) {
            mid = start + ((end - start) >> 1);
            if (spell * potions[mid] >= success)
                count = mid, end = mid - 1;
            else
                start = mid + 1;
        }
        return potions.size() - count;
    }

public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        sort(potions.begin(), potions.end());

        vector<int> successfulPairs;

        for (int spell : spells) {
            successfulPairs.push_back(binarySearch(potions, spell, success));
        }

        return successfulPairs;
    }
};