class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> dp (n, false);

        int max_jump = INT_MAX;
        dp[0] = true;

        for(int i = 0; i < n; i++){
            max_jump = min(i + nums[i], n - 1);
            if(dp[i] == true){
                for(int j = i + 1; j <= max_jump; j++){
                    dp[j] = true;
                }
            }
        }
        return dp[n-1];
    }
};