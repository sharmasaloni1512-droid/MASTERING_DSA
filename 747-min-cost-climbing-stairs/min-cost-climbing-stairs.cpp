class Solution {
public:
    int solve(int i, vector<int> cost ,int size, vector<int> & memo){
        if(i >= size){
            return 0;
        }

        if(memo[i] != -1){
            return memo[i];
        }

        memo[i] = cost[i] + min(solve(i+1, cost, size, memo), solve(i+2, cost,size,memo));
        return memo[i];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> memo(cost.size() +1, -1);
        return min(solve(0, cost ,cost.size(), memo), solve(1, cost, cost.size(), memo));
    }
};