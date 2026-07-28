class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int prefix = 0, count = 0;

        for(int i = 0; i<n; i++){
            prefix += nums[i];
            int target = prefix - k;

            if(mpp.contains(target)){
                count += mpp[target];
            }
            
            if(mpp.contains(prefix)){
                mpp[prefix]++;
            }
            else{
                mpp[prefix] = 1;
            }
        }
        return count;
    }
};