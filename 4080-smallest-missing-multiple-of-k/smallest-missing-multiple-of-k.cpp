class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> numbers;

        for(int i = 0; i < n; i++){
            numbers.insert(nums[i]);
        }

        vector<int> multiples(n);
        for(int i = 1; i <= n; i++){
            multiples[i-1] = i*k;
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(numbers.find(multiples[i]) == numbers.end()){ //condition to find non-existing element
                ans = multiples[i];
                break;
            }
        }

        if(ans == 0){
            return k * (n + 1);
        }
        
        return ans;
    }
};