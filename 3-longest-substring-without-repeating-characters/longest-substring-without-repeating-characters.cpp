class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int maxLength = 0;
        unordered_map<char,int> mpp;

        for(int right = 0; right < n; right++){

            if(mpp.contains(s[right])){
                left = max ( left, mpp[s[right]] + 1);
            }

            mpp[s[right]] = right;

            maxLength = max(maxLength, right - left + 1);

        }
        return maxLength;
    }
};