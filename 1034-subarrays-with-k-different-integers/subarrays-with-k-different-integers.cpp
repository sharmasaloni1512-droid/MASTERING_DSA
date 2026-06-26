class Solution {
private:
    int subarray(vector<int> nums, int k){
        int left = 0;
        int cnt = 0;
        unordered_map<int,int> mpp;
        int n = nums.size();

        for(int right = 0; right<n; right++){
            mpp[nums[right]]++;

            while(mpp.size() > k){
                mpp[nums[left]]--;
                
                if(mpp[nums[left]] == 0){
                    mpp.erase(nums[left]);
                }
                left++;
            }

            cnt += right - left + 1;
        }

        return cnt;
        
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return (subarray(nums,k) - subarray(nums, k-1));
    }
};