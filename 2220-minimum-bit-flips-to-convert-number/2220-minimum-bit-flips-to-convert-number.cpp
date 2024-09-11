class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0, XOR = start ^ goal;

        while (XOR)
            ans += XOR & 1, XOR >>= 1;
        return ans;
    }
};