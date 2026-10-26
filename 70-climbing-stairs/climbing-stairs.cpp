/// Memorization ~ Top - Down Approach
class Solution {
public:
    int solve(int n, vector<int>& memo){
        if(n == 0){
            return 1;
        }

        if(n < 0){
            return 0;
        }

        if(memo[n] != -1){
            return memo[n];
        }

        int stairs = solve(n - 1, memo) + solve(n - 2, memo);
        memo[n] = stairs;
        return memo[n];
    }

    int climbStairs(int n) {
        vector<int> memo(n+1, -1);
        return solve(n, memo);
    }
};



/// BRUTE FORCE

// class Solution {
// public:
//     int solve(int n){
//         if(n == 0){
//             return 1;
//         }

//         if(n < 0){
//             return 0;
//         }

//         return solve(n - 1) + solve(n - 2);
//     }
//     int climbStairs(int n) {
//         if(n == 1 || n == 2 || n == 3){
//             return n;
//         }
//         return solve(n);
//     }
// };