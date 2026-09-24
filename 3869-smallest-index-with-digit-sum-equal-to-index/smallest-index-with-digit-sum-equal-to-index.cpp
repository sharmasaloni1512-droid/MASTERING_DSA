class Solution {
public:

    int digitSum(int num){
        if (num >= 0 && num <= 9){
            return num;
        }

        int sum = 0;
        while(num != 0){
            int digit = num % 10;
            sum += digit;
            num = num / 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int digiSum;

        for(int i = 0; i < n; i++){
            
            digiSum = digitSum(nums[i]);
            if(digiSum == i){
                return i;
            }
        }

        return -1;

    }
};