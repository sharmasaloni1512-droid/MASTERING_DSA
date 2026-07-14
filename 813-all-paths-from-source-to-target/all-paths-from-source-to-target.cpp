class Solution {
public:
    vector<vector<int> > ans;

    void solve(vector<vector<int>> graph, int node, vector<int> path){
        path.push_back(node);

        if(node == graph.size()- 1){
            ans.push_back(path);
        }

        else{

            for(auto k : graph[node]){
                solve(graph, k, path);
            }
        }
        path.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>path;

        solve(graph, 0, path);
        return ans;

    }
};