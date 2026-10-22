class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<double> > dp(n +1 , vector<double> (amount + 1, 0) );

        for(int i = 0; i<= n; i++){
            dp[i][0] = 1;
        }

        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= amount; j++){
                if (coins[i - 1] <= j){
                    dp[i][j] = dp[i-1][j]  + dp[i][j - coins[i - 1]];
                                // top + left
                }
                else{
                    dp[i][j] = dp[i-1][j]; // top
                }
            }
        }

        return dp[n][amount];
    }
};