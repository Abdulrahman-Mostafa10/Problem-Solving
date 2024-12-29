// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st = 1, end = n, mid, ans;
        while (st <= end) {
            mid = st + ((end - st) >> 1);
            if (isBadVersion(mid))
                ans = mid, end = mid - 1;
            else
                st = mid + 1;
        }
        return ans;
    }
};