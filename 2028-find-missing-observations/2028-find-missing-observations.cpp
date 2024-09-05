class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0;
        for (int roll : rolls)
            sum += roll;
        int needed = mean * (n + rolls.size()) - sum;
        vector<int> collection;
        while (needed > 0) {
            int roll = needed / n;
            if (roll > 6 || !roll)
                return vector<int>();
            collection.push_back(roll);
            needed -= roll, n--;
        }
        return collection;
    }
};