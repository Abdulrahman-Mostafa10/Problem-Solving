class Solution {
public:
    string removeStars(string s) {
        stack<char> starsStack;
        stack<int> deletedIndices;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] == '*') {
                starsStack.push(s[i]), deletedIndices.push(i);
            } else {
                if (!starsStack.empty()) {
                    deletedIndices.push(i), starsStack.pop();
                }
            }
        }
        string result = "";
        for (int i = 0; i < s.size(); ++i) {
            if (!deletedIndices.empty() && i == deletedIndices.top()) {
                deletedIndices.pop();
            } else {
                result += s[i];
            }
        }

        return result;
    }
};