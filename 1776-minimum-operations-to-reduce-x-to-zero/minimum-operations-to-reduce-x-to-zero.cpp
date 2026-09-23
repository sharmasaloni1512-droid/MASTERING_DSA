class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int left = 0;
        int n = nums.size();
        int total_sum = 0;
        int minOp = -1;
        int max_len = -1;

        for(int i = 0; i < n; i++){
            total_sum += nums[i];
        }
        // cout << total_sum;

        int remain_sum = total_sum - x;
        int subArr_sum = 0;
        // cout << remain_sum;

        for(int right = 0; right < n; right++){
            subArr_sum += nums[right];

            if(subArr_sum == remain_sum){
                max_len = max(max_len , right - left + 1);   
            }

            if(subArr_sum > remain_sum){
                while(left < n && subArr_sum > remain_sum){  
                    subArr_sum -= nums[left];
                    left++;
                }

                if(subArr_sum == remain_sum){
                    max_len = max(max_len , right - left + 1);
                
                }
            }
            
        }
        // cout << max_len;
        if(max_len == -1){
            return -1;
        }

        // minOp = n - max_len;
        return n - max_len;
    }
};