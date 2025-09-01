class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int i=0, j=1;
        ans.push_back(nums[0]);
        int k=1;
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }else{
                i=j;
                ans.push_back(nums[i]);
                k++;
            }
        }

        for(int i=0; i<k; i++){
            nums[i]= ans[i];
        }
         return k;
    }
};
