class Solution {
    vector<vector<int>> ans;
private:
    void solve(vector<int> nums, int i, vector<int>path, int n){
        if(i == n){
            ans.push_back(path);
            return;
        }

        path.push_back(nums[i]);
        solve(nums, i+1, path, n);
        path.pop_back();
        solve(nums, i+1, path, n);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> path;
        int i =0;
        int n = nums.size();
        solve(nums, i, path, n);
        return ans;
    }
};