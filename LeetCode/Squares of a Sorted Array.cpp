class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int i =0; int s=0;
        while(i<n){
            if(nums[i]<0){
               nums[i]= abs(nums[i]);
            }
            s = pow(nums[i],2);
            ans.push_back(s);
            i++;
        }
        sort(ans.begin(), ans.end());
        return ans;
      
    }
};
