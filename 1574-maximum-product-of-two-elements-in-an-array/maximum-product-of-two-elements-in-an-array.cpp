class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int first_max = INT_MIN, second_max = INT_MIN;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(nums[i]> first_max){
            second_max = first_max;
            first_max = nums[i];
        }
        else if(nums[i] > second_max){
            second_max = nums[i];
        } 
    }
    //cout << first_max << " " << second_max;
    return (first_max - 1) * (second_max - 1);
    }
};