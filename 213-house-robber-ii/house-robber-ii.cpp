class Solution {
public:
    int solve(vector<int>& nums, int start, int end){
        int len = end - start + 1;
        if (len <= 0) return 0;
        if (len == 1) return nums[start];

        vector<int> dp(len, 0);
        dp[0] = nums[start];
        dp[1] = max(nums[start], nums[start + 1]);

        for (int i = 2; i < len; i++) {
            int rob = nums[start + i] + dp[i - 2];
            int skip = dp[i - 1];
            dp[i] = max(rob, skip);
        }
        return dp[len - 1];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }

        int inc = solve(nums, 0, n-2);
        int exc = solve(nums, 1, n-1);

        return max(inc, exc);
    }
};


// class Solution {
// public:
//     int solve(vector<int>& nums, int i, int size, vector<int> &memo){
//         if(i > size){
//             return 0;
//         }

//         if(memo[i] != -1){
//             return memo[i];
//         }
//         int rob = nums[i] + solve(nums, i + 2, size, memo);
//         int skip = solve(nums, i + 1, size, memo);
//         memo[i] = max(rob, skip);
//         return memo[i];
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if(n == 1){
//             return nums[0];
//         }
//         vector<int> memo1(n,-1);
//         int zeroIndex_included = solve(nums, 0, n - 2, memo1);

//         vector<int> memo2(n,-1);
//         int zeroIndex_excluded = solve(nums, 1, n - 1, memo2);

//         return max(zeroIndex_included, zeroIndex_excluded);
//     }
// };