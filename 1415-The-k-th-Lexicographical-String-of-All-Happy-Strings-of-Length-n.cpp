class Solution {
public:
    string getHappyString(int n, int k) {
        int total = 1 << (n - 1);
        if (k > 3 * total)
            return "";

        string res;
        char ch = 'a' + (k - 1) / total;
        res += ch;
        k = (k - 1) % total + 1;

        for (int i = 1; i < n; i++) {
            total /= 2;
            if (k <= total) {
                res += (ch == 'a' ? 'b' : 'a');
            } else {
                res += (ch == 'c' ? 'b' : 'c');
                k -= total;
            }
            ch = res.back();
        }

        return res;
    }
};
