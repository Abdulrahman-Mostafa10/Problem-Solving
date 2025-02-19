class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref(nums.size()+1) ,suf(nums.size()+1);
        pref[0] = suf[nums.size()] = 1;
        for(int i = 1; i<nums.size();++i)
            pref[i] = pref[i-1]*nums[i-1];
        for(int i = suf.size() - 2 ; i>0;--i)
            suf[i] = suf[i+1]*nums[i];
        vector<int> v;
        for(int i =0 ; i<nums.size();++i){
            v.emplace_back(pref[i]*suf[i+1]);
        }
        return v;
    }
};
