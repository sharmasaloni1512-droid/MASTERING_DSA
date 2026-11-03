class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_p = nums[0];

        int suffix = 1, prefix = 1;
        for(int i = 0; i < n; i++){
            if(prefix == 0){
                prefix = 1;
            }
            if(suffix == 0){
                suffix = 1;
            }

            prefix *= nums[i];
            suffix *= nums[n - i - 1];

            max_p = max(max_p, max(suffix, prefix));
        }
        return max_p;
    }
};