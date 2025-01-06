class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int> result(n);

        int cnt = 0, ops = 0;
        for (int i = 0; i < n; ++i) {
            result[i] += ops;
            if (boxes[i] == '1')
                cnt++;
            ops += cnt;
        }

        cnt = ops ^= ops;
        for (int i = n - 1; i >= 0; --i) {
            result[i] += ops;
            if (boxes[i] == '1')
                cnt++;
            ops += cnt;
        }

        return result;
    }
};