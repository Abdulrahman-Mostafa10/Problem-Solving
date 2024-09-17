class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> wordCount;
        vector<string> answer;

        auto processSentence = [&](const string& sentence) {
            int j = 0;
            for (int i = 0; i <= sentence.length(); ++i) {
                if (i == sentence.size() || sentence[i] == ' ') {
                    string word = sentence.substr(j, i - j);
                    wordCount[word]++;
                    j = i + 1;
                }
            }
        };

        processSentence(s1), processSentence(s2);

        for (auto word : wordCount) {
            if (word.second == 1)
                answer.push_back(word.first);
        }
        return answer;
    }
};