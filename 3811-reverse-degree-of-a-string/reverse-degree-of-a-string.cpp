class Solution {
public:
    int reverseDegree(string s) {
        int degree = 0;
        int n = s.size();

        for(int i = 0; i < n; i++){
            int prod = 1;
            prod = (26 - (s[i] - 'a')) * (i + 1);
            degree += prod;
        }

        // cout << 26 - (s[1] - 'a');
        
        return degree;
    }
};