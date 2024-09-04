class Solution {
private:
    struct Point {
        int x, y;
        Point() { x = y = 0; }
        Point(Point& p) { this->x = p.x, this->y = p.y; }
    };
    void updatePosition(int command, const set<pair<int, int>>& walls,
                        bool& left, bool& right, bool& up, bool& down,
                        Point& p) {
        if (command > -1) {
            if (left) {
                if (!walls.empty()) {
                    for (int i = 1; i <= command; ++i) {
                        auto it = walls.find({p.x - 1, p.y});
                        if (it == walls.end())
                            p.x--;
                        else
                            return;
                    }
                } else
                    p.x -= command;
            } else if (right) {
                if (!walls.empty()) {
                    for (int i = 1; i <= command; ++i) {
                        if (!walls.empty()) {
                            auto it = walls.find({p.x + 1, p.y});
                            if (it == walls.end())
                                p.x++;
                            else
                                return;
                        }
                    }
                } else
                    p.x += command;
            } else if (up) {
                if (!walls.empty()) {
                    for (int i = 1; i <= command; ++i) {
                        auto it = walls.find({p.x, p.y + 1});
                        if (it == walls.end())
                            p.y++;
                        else
                            return;
                    }
                } else
                    p.y += command;
            } else {
                if (!walls.empty()) {
                    for (int i = 1; i <= command; ++i) {
                        auto it = walls.find({p.x, p.y - 1});
                        if (it == walls.end())
                            p.y--;
                        else
                            return;
                    }
                } else
                    p.y -= command;
            }
        } else if (command == -1) {
            if (left)
                up = true, left = right = down = false;
            else if (right)
                down = true, left = right = up = false;
            else if (up)
                right = true, left = up = down = false;
            else
                left = true, right = up = down = false;
        } else {
            if (left)
                down = true, left = right = up = false;
            else if (right)
                up = true, left = right = down = false;
            else if (up)
                left = true, right = up = down = false;
            else
                right = true, left = up = down = false;
        }
    }

public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        Point p, maxPoint;
        set<pair<int, int>> walls;
        for (int i = 0; i < obstacles.size(); ++i)
            walls.insert({obstacles[i][0], obstacles[i][1]});

        bool left = false, right = false, up = true, down = false;
        for (auto command : commands) {
            updatePosition(command, walls, left, right, up, down, p);
            if ((pow(p.x, 2) + pow(p.y, 2)) >
                (pow(maxPoint.x, 2) + pow(maxPoint.y, 2)))
                maxPoint = p;
        }
        return pow(maxPoint.x, 2) + pow(maxPoint.y, 2);
    }
};