class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, bool>>> graph(n);
        for (const auto& connection : connections) {
            int u = connection[0];
            int v = connection[1];

            graph[u].push_back({v, true});
            graph[v].push_back({u, false});
        }

        queue<int> q;
        vector<bool> visited(n);
        int totalReverses = 0;

        q.push(0);
        visited[0] = true;

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            for (auto const& [neighbor, needsReversal] : graph[current]) {
                if (!visited[neighbor]) {
                    totalReverses += needsReversal;
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        return totalReverses;
    }
};