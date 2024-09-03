class Solution {
public:
    int getLucky(string s, int k) {
        string t = "";
        for (int i = 0; i < s.size(); ++i) {
            int val = s[i] - 96;
            t += (to_string(val));
        }
        int ans;
        while (k--) {
            int x = 0;
            for (auto c : t)
                x += c - '0';
            t = to_string(x);
            ans = x;
        }
        return ans;
    }
};