class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> mpp;

        for(auto ch : s){
            mpp[ch]++;
        }

        for(int i = 0; i < t.size(); i++){
            char ch = t[i];

            if(mpp.contains(ch)){
                mpp[ch]--;

                if(mpp[ch] < 0){
                    return false;
                }
            }

            else{
                return false;
            }
        }

        return true;
    }
};