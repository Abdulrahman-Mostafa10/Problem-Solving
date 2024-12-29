class Solution {
public:
    string reverseWords(string s) {
        int st = -1;
        vector<string> v;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != ' ' && st == -1)
                st = i;
            else if (s[i] == ' ' && st != -1)
                v.push_back(s.substr(st, i - st)), st = -1;
        }
        if (st != -1)
            v.push_back(s.substr(st, s.size() - st));
        string ans;
        for (int i = v.size() - 1; i >= 0; --i)
            ans += v[i] + ((i) ? \ \ : \\);
        return ans;
    }
};