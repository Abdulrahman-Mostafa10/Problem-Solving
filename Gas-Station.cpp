class Solution {
public:
    int canCompleteCircuit(const vector<int>& A, const vector<int>& B) {
        int g = 0, c = 0, t = 0, st = 0;
        for (int i = 0; i < A.size(); ++i) {
            g += A[i], c += B[i], t += A[i] - B[i];
            if (t < 0) {
                st = i + 1;
                t = 0;
            }
        }
        return g >= c ? st : -1;
    }
};