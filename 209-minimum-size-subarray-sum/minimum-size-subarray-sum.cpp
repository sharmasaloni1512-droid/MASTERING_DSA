class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int left = 0;
        int min_length = INT_MAX;

        for(int right = 0; right < n; right++ ){
            sum += nums[right];
        
            while(sum >= target){
                min_length = min(min_length, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }

        if(left == 0 && sum < target) {
            return 0;
        }
        return min_length;
    }
};