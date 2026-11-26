class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<long long> dp(n,INT_MAX);
        dp[0] = 0;

        for(int i = 0; i<n; i++){
            for(int j = 1; j<= nums[i]; j++){
                int x = i + j;

                if(x < n){
                    dp[x] = min(dp[x], 1 + dp[i]);
                }
            }
        }
        return dp[n-1];
    }
};