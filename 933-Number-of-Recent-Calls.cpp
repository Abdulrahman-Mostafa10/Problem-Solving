class RecentCounter {
private:
    deque<int> currentPings;

public:
    RecentCounter() {}

    int ping(int t) {
        int minTime = t - 3000, count = 0;
        currentPings.push_front(t);
        for (int ping : currentPings) {
            if (ping < minTime)
                break;
            count++;
        }
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */