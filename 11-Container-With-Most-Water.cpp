class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0, leftBorder = 0, rightBorder = height.size() - 1;
        while (rightBorder > leftBorder) {
            if (height[leftBorder] < height[rightBorder]) {
                maxWater = max(maxWater,
                               (rightBorder - leftBorder) * height[leftBorder]);
                leftBorder++;
            } else {
                maxWater = max(maxWater, (rightBorder - leftBorder) *
                                             height[rightBorder]);
                rightBorder--;
            }
        }
        return maxWater;
    }
};