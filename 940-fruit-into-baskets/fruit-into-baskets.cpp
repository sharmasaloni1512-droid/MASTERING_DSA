class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int left = 0; int maxCount = INT_MIN;
        unordered_map<int,int> mpp;

        for(int right = 0; right < n; right++){
            mpp[fruits[right]]++;

            while(mpp.size() > 2){
                mpp[fruits[left]]--;
                if(mpp[fruits[left]] == 0){
                    mpp.erase(fruits[left]);
                }
                left++;
            }
            maxCount = max(maxCount, right-left+1);
        }
        return maxCount;
    }
};