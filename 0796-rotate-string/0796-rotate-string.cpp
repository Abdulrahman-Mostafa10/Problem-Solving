class Solution {
public:
    bool rotateString(string s, string goal) {
        return goal.size() == s.size() && (s + s).find(goal) != string::npos;
    }
};