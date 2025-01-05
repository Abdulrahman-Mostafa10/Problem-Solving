class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.length();
        vector<int> diff(n + 1, 0);

        for (auto& shift : shifts) {
            int st = shift[0], end = shift[1], dir = shift[2];
            int delta = (dir == 1) ? 1 : -1;
            diff[st] += delta;
            diff[end + 1] -= delta;
        }

        int totalShift = 0;
        for (int i = 0; i < n; ++i) {
            totalShift += diff[i];
            totalShift = (totalShift % 26 + 26) % 26;
            s[i] = 'a' + (s[i] - 'a' + totalShift) % 26;
        }

        return s;
    }
};