class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        for (int i = 0; i < words.size(); ++i) {
            bool flag = 0;
            for (int j = 0; j < words.size(); ++j) {
                if (i != j && words[i].size() <= words[j].size()) {
                    for (int k = 0; k <= words[j].size() - words[i].size();
                         ++k) {
                        if (words[j].substr(k, words[i].size()) == words[i]) {
                            result.push_back(words[i]);
                            flag = 1;
                            break;
                        }
                    }
                    if (flag)
                        break;
                }
            }
        }
        return result;
    }
};