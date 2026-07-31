// TOP- DOWM APPROACH ~ TC -O(n)
class Solution {
public:
    int solve(vector<int>& nums, int idx, vector<int> & memo){
        if(idx >= nums.size()){
            return 0;
        }

        if(memo[idx] != -1){
            return memo[idx];
        }

        int rob = nums[idx] + solve(nums, idx + 2, memo);
        int skip = solve(nums, idx + 1, memo);

        memo[idx] = max(rob, skip);
        return memo[idx];
    }

    int rob(vector<int>& nums) {
        vector<int> memo(nums.size() + 1, -1);
        return solve(nums,0, memo);
    }
};


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