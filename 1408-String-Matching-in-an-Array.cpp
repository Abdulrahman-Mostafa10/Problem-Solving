class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        for (auto s : words) {
            for (auto t : words) {
                if (s != t && t.find(s) != string::npos) {
                    result.push_back(s);
                    break;
                }
            }
        }
        return result;
    }
};