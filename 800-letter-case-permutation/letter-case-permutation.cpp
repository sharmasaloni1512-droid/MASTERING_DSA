class Solution {
public:
    vector<string> ans;
    void solve(string s, int i, string path){

        if(path.size() == s.size()){
            ans.push_back(path);
            return;
        }
        if(isalpha(s[i])){
            solve(s, i + 1, path + (char)tolower(s[i]));
            solve(s, i + 1, path + (char)toupper(s[i]));
        }
        else{
            solve(s, i + 1, path + s[i]);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        string path = "";
        solve(s,0,path);
        return ans;
    }
};