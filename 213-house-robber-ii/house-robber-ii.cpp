class Solution {
public:
    int solve(vector<int>& nums, int i, int size, vector<int> &memo){
        if(i > size){
            return 0;
        }

        if(memo[i] != -1){
            return memo[i];
        }
        int rob = nums[i] + solve(nums, i + 2, size, memo);
        int skip = solve(nums, i + 1, size, memo);
        memo[i] = max(rob, skip);
        return memo[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        vector<int> memo1(n,-1);
        int zeroIndex_included = solve(nums, 0, n - 2, memo1);

        vector<int> memo2(n,-1);
        int zeroIndex_excluded = solve(nums, 1, n - 1, memo2);

        return max(zeroIndex_included, zeroIndex_excluded);
    }
};