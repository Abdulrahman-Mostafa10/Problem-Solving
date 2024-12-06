class Solution {
private:
    bool valid(int idx, int idy, int m, int n) {
        return idx >= 0 && idy >= 0 && idx < m && idy < n;
    }

    void bfs(vector<vector<int>>& image, int sr, int sc, int color) {
        if (color == image[sr][sc])
            return;
        queue<pair<int, int>> q;

        int target = image[sr][sc], m = image.size(), n = image[0].size();
        int dx[] = {-1, +1, 0, 0, 0}, dy[] = {0, 0, -1, +1, 0};

        q.push({sr, sc});
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            for (int i = 0; i < 5; ++i) {
                int nx = x + dx[i], ny = y + dy[i];
                if (valid(nx, ny, m, n) && image[nx][ny] == target) {
                    image[nx][ny] = color;
                    q.push({nx, ny});
                }
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        bfs(image, sr, sc, color);
        return image;
    }
};