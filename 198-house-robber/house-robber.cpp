// BOTTOM- UP Approach ~ TC- O(N)
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }

        if(n == 2){
            return max(nums[0], nums[1]);
        }

        // vector<int> dp(n, 0);

        int a = nums[0];
        int b = max(nums[0], nums[1]);

        for(int i = 2; i < n; i++){
            int rob = nums[i] + a;
            int skip = b;
            int temp = rob;
            a = skip;
            b = max(temp, a);
        }
        return b;
    }
};


// TOP- DOWM APPROACH ~ TC -O(n)
// class Solution {
// public:
//     int solve(vector<int>& nums, int idx, vector<int> & memo){
//         if(idx >= nums.size()){
//             return 0;
//         }

//         if(memo[idx] != -1){
//             return memo[idx];
//         }

//         int rob = nums[idx] + solve(nums, idx + 2, memo);
//         int skip = solve(nums, idx + 1, memo);

//         memo[idx] = max(rob, skip);
//         return memo[idx];
//     }

//     int rob(vector<int>& nums) {
//         vector<int> memo(nums.size(), -1);
//         return solve(nums,0, memo);
//     }
// };


// BRUTE FORCE SOLUTION ~ (2^n) - Time Complexity
// class Solution {
// public:
//     int solve(vector<int> nums, int idx){
//         if(idx >= nums.size()){
//             return 0;
//         }

//         int rob = nums[idx] + solve(nums, idx + 2);
//         int skip = solve(nums, idx + 1);
//         return max(rob , skip);

//     }
    
//     int rob(vector<int>& nums) {
//         int max_robbery = solve(nums, 0);
//         return max_robbery;
//     }
// };