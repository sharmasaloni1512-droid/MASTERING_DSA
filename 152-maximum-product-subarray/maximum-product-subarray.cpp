class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_p = nums[0];

        for(int i = 0; i < n; i++){
            int product = 1;
            for(int j = i; j < n; j++){
                product *= nums[j];
                if(product > max_p){
                    max_p = product;
                }
            }
        }
        return max_p;
    }
};