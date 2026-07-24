class Solution {
public:
// Constant space optimization
    int climbStairs(int n) {
        if(n <= 2){
            return n;
        }

        int previous_two = 1;
        int previous_one = 2;

        for(int i = 3; i<=n; i++){
            int current = previous_one + previous_two;
            previous_two = previous_one;
            previous_one = current;
        }
        return previous_one;
    }
};