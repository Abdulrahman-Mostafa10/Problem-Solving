class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> v;
        int j;
        for (int i = 0; i < sentence.size(); i = (j + 1)) {
            for (j = i + 1; j < sentence.size(); j++) {
                if (sentence[j] == ' ')
                    break;
            }
            if (j == sentence.size() - 1)
                j++;
            v.push_back(sentence.substr(i, j - i));
        }
        for (int i = 0; i < v.size(); ++i) {
            if (v[i][v[i].size() - 1] != v[(i + 1) % v.size()][0])
                return false;
        }
        return true;
    }
};