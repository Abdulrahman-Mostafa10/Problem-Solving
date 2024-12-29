class Solution {
public:
    string removeStars(string s) {
        string result;
        for (char ch : s) {
            if (ch == '*') {
                if (!result.empty()) {
                    result.pop_back();
                }
            } else {
                result.push_back(ch);
            }
        }
        return result;
    }
};
