class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i = 0;
        while (i < flowerbed.size()) {
            if (!n)
                break;
            if (flowerbed[i])
                i += 2;
            else {
                if (!flowerbed[i]) {
                    if (i < flowerbed.size() - 1 && flowerbed[i + 1])
                        i += 3;
                    else
                        n--, i += 2;
                }
            }
        }
        return !n;
    }
};