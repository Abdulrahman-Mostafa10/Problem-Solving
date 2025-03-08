class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {

        int height[matrix.size()][matrix[0].size()];
        
        memset(height, 0, sizeof(height));

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == '1'){
                    if(i == 0){
                        height[i][j] = 1;
                    }else{
                        height[i][j] = height[i-1][j] + 1;
                    }
                }
            }
        }

        int ans = 0;
        
        int dp[matrix.size()][matrix[0].size()][matrix.size() + 1];
        
        memset(dp, 0, sizeof(dp));
        
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                for(int k = 1; i - k >= -1; k++){
                    if(height[i][j] >= k){
                        dp[i][j][k] = (j == 0 ? 0 : dp[i][j-1][k]) + k;
                        ans = max(ans, dp[i][j][k]);
                    }else{
                        break;
                    }
                }
            }
        }

        return ans;
    }
};