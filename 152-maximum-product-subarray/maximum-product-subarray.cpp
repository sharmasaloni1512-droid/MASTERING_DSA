class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_p = nums[0];
        int min_p = nums[0];
        int result = nums[0];

        for(int i = 1; i < n; i++){
            if(nums[i] < 0){
                swap(max_p, min_p);
            }

            max_p = max(nums[i], nums[i] * max_p);
            min_p = min(nums[i], nums[i] * min_p);

            result = max(result, max(max_p, min_p));
        }
        return result;
    }
};