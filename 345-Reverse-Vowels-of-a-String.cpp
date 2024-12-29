class Solution {
public:
    string reverseVowels(string s) {
        vector<int> v;
        for (int i = 0; i < s.size(); ++i) {
            char c = tolower(s[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                v.push_back(i);
        }

        int idx = v.size() - 1, k = 0;
        string result = \\;
        for (int i = 0; i < s.size(); ++i) {
            if (k <= idx && v[k] == i) {
                swap(s[i], s[v[idx]]), k++, idx--;
            }
        }

        return s;
    }
};