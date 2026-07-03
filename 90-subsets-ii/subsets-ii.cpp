class Solution {
private:
    vector<vector<int> > ans;
    void solve(vector<int> nums, int i, vector<int> path, int n){
        if(i == n){
            ans.push_back(path);
            return;
        }

        path.push_back(nums[i]);
        solve(nums, i+1, path, n);
        path.pop_back();

        while((i+1 < n) && (nums[i] == nums[i+1])){
            i++;
        }

        solve(nums, i+1, path, n);
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0;
        vector<int> path;

        solve(nums, i, path, n);
        return ans;
    }
};