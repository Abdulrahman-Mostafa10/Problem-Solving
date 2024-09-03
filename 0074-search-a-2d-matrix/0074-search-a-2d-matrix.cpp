class Solution {
private:
    int m, n;
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;
        m = matrix.size(), n = matrix[0].size();
        int st = 0, end = m * n - 1, mid;
        while (st <= end) {
            mid = st + ((end - st) >> 1);
            int row = mid / n, col = mid % n;
            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] < target)
                st = mid + 1;
            else
                end = mid - 1;
        }
        return false;
    }
};