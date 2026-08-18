class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        vector<int> ans(2);
        for(int i = 0; i<nums.size(); i++){
            int secondNumber = target - nums[i];

            if(mpp.contains(secondNumber)){
                ans[0] = mpp[secondNumber];
                ans[1] = i;
                break;
            }
            mpp[nums[i]] = i;

        }
        return ans;
    }
};