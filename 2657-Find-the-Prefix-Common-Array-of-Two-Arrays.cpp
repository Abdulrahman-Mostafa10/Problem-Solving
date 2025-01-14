class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> res(A.size());
        set<int> stA, stB;
        if (A[0] == B[0])
            res[0] = 1;
        stA.insert(A[0]), stB.insert(B[0]);
        for (int i = 1; i < A.size(); ++i) {
            int cnt = 0;
            if (A[i] == B[i])
                cnt++;
            else {
                if (stB.contains(A[i]))
                    cnt++;
                if (stA.contains(B[i]))
                    cnt++;
            }
            stA.insert(A[i]), stB.insert(B[i]);
            res[i] = res[i - 1] + cnt;
        }
        return res;
    }
};