class Solution {
private:
    struct pair_hash {
        size_t operator()(const pair<int, int>& p) const {
            return hash<long long>()(((long long)p.first << 32) ^
                                     (long long)p.second);
        }
    };

public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<pair<int, int>, pair_hash> walls;
        vector<pair<int, int>> directions = {
            {0, +1}, {+1, 0}, {0, -1}, {-1, 0}};
        int directionIndex = 0, maxDirection = 0, x = 0, y = 0;
        for (auto obstacle : obstacles)
            walls.emplace(make_pair(obstacle[0], obstacle[1]));
        for (auto command : commands) {
            if (command == -1)
                directionIndex = (directionIndex + 1) % 4;
            else if (command == -2)
                directionIndex = (directionIndex + 3) % 4;
            else {
                for (int i = 1; i <= command; ++i) {
                    int targetX = x + directions[directionIndex].first,
                        targetY = y + directions[directionIndex].second;
                    if (walls.find({targetX, targetY}) == walls.end()) {
                        x = targetX, y = targetY;
                        maxDirection = max(maxDirection, x * x + y * y);
                    } else
                        break;
                }
            }
        }
        return maxDirection;
    };
};
