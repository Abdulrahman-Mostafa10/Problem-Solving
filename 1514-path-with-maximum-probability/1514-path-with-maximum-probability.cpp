class Solution {
private:
    double dijkstra(int src, const int dst,
                    const vector<vector<pair<int, double>>>& adj) {
        vector<double> distance(adj.size(), 0.0);
        priority_queue<pair<double, int>> pq;
        distance[src] = 1.0;
        pq.push({1.0, src});
        while (!pq.empty()) {
            double currentDistance = pq.top().first;
            int u = pq.top().second;
            pq.pop();

            if (u == dst)
                return distance[u];
            if (currentDistance > distance[u])
                continue;
            for (auto neighbour : adj[u]) {
                int v = neighbour.first;
                double weight = neighbour.second;
                if (distance[v] < distance[u] * weight) {
                    distance[v] =distance[u] * weight;
                    pq.push({distance[v], v});
                }
            }
        }
        return 0.;
    }

public:
    double maxProbability(int n, vector<vector<int>>& edges,
                          vector<double>& succProb, int start_node,
                          int end_node) {
        vector<vector<pair<int, double>>> adj(n);
        for (int i = 0; i < edges.size(); ++i) {
            adj[edges[i][0]].emplace_back(edges[i][1], succProb[i]);
            adj[edges[i][1]].emplace_back(edges[i][0], succProb[i]);
        }
        double res = dijkstra(start_node, end_node, adj);
        return  res;
    }
};