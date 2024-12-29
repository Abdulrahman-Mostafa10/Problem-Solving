class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1, set2;

        for (int num : nums1)
            set1.insert(num);
        for (int num : nums2)
            set2.insert(num);

        vector<vector<int>> differenceVector(2);
        for (int num : set1) {
            if (!set2.contains(num))
                differenceVector[0].push_back(num);
        }
        for (int num : set2) {
            if (!set1.contains(num))
                differenceVector[1].push_back(num);
        }

        return differenceVector;
    }
};