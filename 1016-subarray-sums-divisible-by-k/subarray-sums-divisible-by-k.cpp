class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix = 0, count = 0;
        unordered_map<int,int> mpp;
        mpp[0] = 1;

        for(int i = 0; i < n; i++){
            
            prefix += nums[i];

            int rem = prefix % k;

            if(rem < 0){
                rem += k;
            }

            if(mpp.contains(rem)){
                count += mpp[rem];
                
            }

            if(mpp.contains(rem)){
                mpp[rem]++;
            }
            else{
                mpp[rem] = 1;
            }
        }
      
        return count;
    }
};