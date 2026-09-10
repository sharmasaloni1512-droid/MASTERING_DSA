class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int> > s;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int diff = abs(nums[i] - nums[j]);

                if(diff == k){
                    int a = nums[i];
                    int b = nums[j];

                    if(a > b){
                        swap(a, b);
                    }
                    s.insert({a,b});
                }
            }
        }
        return s.size();
    }
};