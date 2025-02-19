class Solution {
private:
    vector<string> v;
    void rec(int n, string s = "") {
        if (s.size() == n) {
            v.emplace_back(s);
            return;
        }
        if (s.empty()) {
            rec(n, s + 'a'), rec(n, s + 'b'), rec(n, s + 'c');
        } else {
            switch (s.back()) {
            case 'a':
                rec(n, s + 'b'), rec(n, s + 'c');
                break;
            case 'b':
                rec(n, s + 'a'), rec(n, s + 'c');
                break;
            case 'c':
                rec(n, s + 'a'), rec(n, s + 'b');
                break;
            }
        }
    }

public:
    string getHappyString(int n, int k) {
        rec(n);
        return k <= v.size() ? v[k - 1] : "";
    }
};