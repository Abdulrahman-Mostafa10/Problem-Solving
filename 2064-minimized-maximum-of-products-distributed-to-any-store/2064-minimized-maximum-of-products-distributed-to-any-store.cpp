class Solution {
private:
    bool canDistribute(const vector<int>& products, int maxProducts,
                       int stores) {
        int neededStores = 0;
        for (int p : products) {
            neededStores += (p + maxProducts - 1) / maxProducts;
            if (neededStores > stores)
                return false;
        }
        return true;
    }

public:
    int minimizedMaximum(int stores, vector<int>& products) {
        int left = 1, right = *max_element(products.begin(), products.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canDistribute(products, mid, stores))
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};