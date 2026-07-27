class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n =  nums.size();
        
        int first_max = nums[n-1];
        int second_max = nums[n-2];

        int result = (first_max - 1)*(second_max - 1);
        return result;
    }
};