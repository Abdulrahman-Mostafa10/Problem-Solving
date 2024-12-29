class Solution {
public:
    string predictPartyVictory(string senate) {
        deque<int> radiants, dires;
        for (int i = 0; i < senate.size(); ++i)
            (senate[i] == 'R') ? radiants.push_back(i) : dires.push_back(i);

        while (!radiants.empty() && !dires.empty()) {
            if (radiants.front() < dires.front())
                radiants.push_back(radiants.front() + senate.size()),
                    radiants.pop_front(), dires.pop_front();
            else
                dires.push_back(dires.front() + senate.size()),
                    dires.pop_front(), radiants.pop_front();
        }

        return radiants.empty() ? "Dire" : "Radiant";
    }
};