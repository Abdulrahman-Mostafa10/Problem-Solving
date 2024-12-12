class Solution {
private:
    bool valid(vector<int>& piles, int mid, int h) {
        int totalHours = 0;
        for (int pile : piles) {
            totalHours += (pile + mid - 1) / mid;
            if (totalHours > h)
                return false;
        }
        return totalHours <= h;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int st = 1, end = 1e9, mid, result = 0;
        while (st <= end) {
            mid = st + ((end - st) >> 1);
            if (valid(piles, mid, h))
                end = mid - 1, result = mid;
            else
                st = mid + 1;
        }
        return result;
    }
};