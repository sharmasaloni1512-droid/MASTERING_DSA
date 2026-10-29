class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        for(auto i : nums){
            totalSum += i;
        }

        if(totalSum % 2 != 0){
            return false;
        }

        int target = totalSum / 2;
        vector<int> dp(target + 1, false);
        dp[0] = true;

        for(auto x : nums){
            for(int y = target; y >= 1; y--){
                if(y >= x){
                    dp[y] = dp[y] || dp[y - x];
                }
            }
        }
        return dp[target];
    }
};