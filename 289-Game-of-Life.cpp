class Solution {
private:
    int dx[8] = {+1, +1, +1, -1, -1, -1, 0, 0};
    int dy[8] = {0, +1, -1, 0, +1, -1, +1, -1};
    int m, n;

    bool valid(int i, int j) { return i >= 0 && i < m && j >= 0 && j < n; }

public:
    void gameOfLife(vector<vector<int>>& board) {
        m = board.size();
        n = board[0].size();

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int aliveCount = 0;

                for (int k = 0; k < 8; ++k) {
                    int nx = i + dx[k], ny = j + dy[k];
                    if (valid(nx, ny) && (board[nx][ny] & 1)) {
                        aliveCount++;
                    }
                }

                if ((board[i][j] & 1) && (aliveCount < 2 || aliveCount > 3)) {
                    board[i][j] = board[i][j] & 1;
                } else if (!(board[i][j] & 1) && aliveCount == 3) {
                    board[i][j] |= 2;
                } else if (board[i][j] & 1) {
                    board[i][j] |= 2;
                }
            }
        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                board[i][j] >>= 1;
            }
        }
    }
};
