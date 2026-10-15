class Solution {
public:
    int solve(vector<int> & coins, int rem, vector<int>& memo){
        if(rem == 0){
            return 0;
        }
        if(rem < 0){
            return INT_MAX;
        }
        if(memo[rem] != -1){
            return memo[rem];
        }

        int res = INT_MAX;
        for(int i = 0; i< coins.size(); i++){

            int cal = solve(coins, rem - coins[i], memo);
            if(cal != INT_MAX){
                res = min(res, 1 + cal);
            }
        }
        memo[rem] = res;
        return res;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> memo(amount + 1, -1);
        int ans = solve(coins, amount, memo);
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};