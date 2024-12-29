class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int previousAltitude = 0, maxAltitude = 0;
        for (int g : gain) {
            maxAltitude = max(maxAltitude, g + previousAltitude);
            previousAltitude += g;
        }
        return maxAltitude;
    }
};