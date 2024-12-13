class Solution {
private:
    vector<bool> visited;
    int dfs(const vector<vector<int>>& rooms, int currentIndex = 0) {
        int count = 1;
        visited[currentIndex] = true;
        for (int neighbor : rooms[currentIndex]) {
            if (!visited[neighbor]) {
                count += dfs(rooms, neighbor);
            }
        }
        return count;
    }

public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        visited.resize(rooms.size());
        return dfs(rooms) == rooms.size();
    }
};