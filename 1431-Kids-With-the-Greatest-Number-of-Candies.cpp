class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxValue = *max_element(candies.begin(), candies.end());
        vector<bool> isEqualCandy;
        for (auto candy : candies) {
            bool flag = candy + extraCandies >= maxValue;
            isEqualCandy.push_back(flag);
        }
        return isEqualCandy;
    }
};