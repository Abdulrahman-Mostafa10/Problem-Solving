class Solution {
private:
    int n, m;
    const int dx[4] = {0, 0, +1, -1}, dy[4] = {+1, -1, 0, 0};
    bool valid(const vector<vector<char>>& grid,
               const vector<vector<bool>>& vis, int i, int j) {
        return i >= 0 && j >= 0 && j < n && i < m && !vis[i][j] &&
               grid[i][j] == '1';
    }
    void bfs(vector<vector<bool>>& vis, const vector<vector<char>>& grid,
             const int& i, const int& j) {
        queue<pair<int, int>> q;
        q.push({i, j});
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            for (int i = 0; i < 4; ++i) {
                if (valid(grid, vis, x + dx[i], y + dy[i]))
                    q.push({x + dx[i], y + dy[i]}),
                        vis[x + dx[i]][y + dy[i]] = 1;
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size(), n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int cnt = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    vis[i][j] = 1;
                    cnt++;
                    bfs(vis, grid, i, j);
                }
            }
        }
        return cnt;
    }
};