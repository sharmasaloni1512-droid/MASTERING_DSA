class Solution {
public:
    vector<string> ans;
    void solve(int n, int open , int close, string path){

        if(path.size() == 2*n){
            ans.push_back(path);
            return;
        }

        if(open < n){
            solve(n, open+1, close, path+ '(');
        }
        
        if(close < open){
            solve(n, open, close+1, path+')');
        }
    }

    vector<string> generateParenthesis(int n) {
  
        string path = "";
        int open = 0; 
        int close = 0;
        solve(n, open, close, path);
        return ans;
    }
};