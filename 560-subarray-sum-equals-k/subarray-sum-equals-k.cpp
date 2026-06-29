class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int prefixSum = 0;
        int count = 0;

        mpp[0] = 1;

        for(int n : nums){
            prefixSum += n;

            if(mpp.contains(prefixSum - k)){
                count += mpp[prefixSum - k];
            }

            mpp[prefixSum]++;
        }
        return count;
    }
};