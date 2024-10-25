class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        string previousFolder = "";
        vector<string> subFolder;

        sort(folder.begin(), folder.end());

        for (const string& f : folder) {
            if (previousFolder.empty() ||
                f.compare(0, previousFolder.size(), previousFolder) ||
                f[previousFolder.size()] != '/') {
                subFolder.push_back(f);
                previousFolder = f;
            }
        }

        return subFolder;
    }
};