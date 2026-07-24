class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int maxLength = 0;
        unordered_map<char,int> mpp;

        for(int right = 0; right < n; right++){
            mpp[s[right]]++;

            while(mpp[s[right]] > 1){
                mpp[s[left]]--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);

        }
        return maxLength;
    }
};