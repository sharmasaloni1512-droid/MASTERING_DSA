class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int> candidates, int size, int target, int idx, vector<int>path){
        if(target == 0){
            ans.push_back(path);
            return;
        }

        if(target < 0 || idx == size){
            return;
        }

        path.push_back(candidates[idx]);
        solve(candidates, size, target - candidates[idx], idx, path);
        path.pop_back();
        solve(candidates, size, target, idx+1, path);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> path;
        solve(candidates, n, target, 0, path);

        return ans;
    }
};