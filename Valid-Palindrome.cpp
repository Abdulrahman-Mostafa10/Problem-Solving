class Solution {
public:
    bool isPalindrome(string s) {
        string t = \\;
        for (char ch : s)
            if (isalnum(ch))
                t += tolower(ch);

        int l = 0, r = t.size() - 1;
        while (l <= r) {
            if (t[l] != t[r])
                return false;
            l++, r--;
        }
        return true;
    }
};