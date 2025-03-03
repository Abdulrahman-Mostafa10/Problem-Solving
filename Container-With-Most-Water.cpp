class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0,r=height.size()-1,mx=0;
        while(l<r){
            int mn = min(height[l],height[r]);
            mx = max(mx,mn*(r-l));
            if(height[l] == mn)
                l++;
            else
                r--;
        }
        return mx;
    }
};