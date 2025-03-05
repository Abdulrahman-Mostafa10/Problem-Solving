class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mn = INT_MAX;
        int l=0,r=0,s=0;
        for(r = 0; r < nums.size(); r++){
            s+=nums[r];
            while(s>=target) mn=min(mn,r-l+1),s-=nums[l++];
        }
        return mn != INT_MAX ? mn : 0;
    }
};