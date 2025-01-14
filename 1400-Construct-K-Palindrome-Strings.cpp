class Solution {
public:
     bool canConstruct(string s, int k) {
        if(k>s.size()) return false;
        int even = 0;
        int odd = 0;
        vector<int> v(26);
        for(auto i:s) v[i-'a']++;
        for(auto i:v) i%2==0?even++:odd++;
        return odd <= k;
    }
};