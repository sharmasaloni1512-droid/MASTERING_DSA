class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j = 0, n = nums.size();
        int current_count = 0, maxCount = INT_MIN;

        while(j < n){
            if(nums[j] == 1){
                current_count++;
            }
            else{
                maxCount = max(maxCount , current_count);
                current_count = 0;
            }
            j++;
        }
        maxCount = max(maxCount, current_count);
        return maxCount;
    }
};