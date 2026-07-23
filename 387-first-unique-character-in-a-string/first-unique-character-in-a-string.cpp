class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, int> mpp;

        for(auto ch : s){
            mpp[ch]++;
        }

        int n = s.size();
    
        for(int i = 0; i < n; i++){
            char ch = s[i];

            if(mpp[ch] == 1){
                return i;
            }
        }

        return -1;
    }
};