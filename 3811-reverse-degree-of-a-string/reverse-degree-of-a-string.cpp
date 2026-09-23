class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char, int> mpp;
        int count = 1;
        for(char ch = 'z'; ch >= 'a'; ch--){
            mpp[ch] = count;
            count++;
        }

        int degree = 0;
        int n = s.size();

        for(int i = 0; i < n; i++){
            int prod = 1;
            prod = mpp[s[i]] * (i + 1);
            degree += prod;
        }
        
        return degree;
    }
};