class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int countUpper = 0;
        int countLower = 0;
        int idx = -1;

        for(int i = 0; i<n; i++){
            if(isupper(word[i])){
                countUpper++;
                idx = i;
            }
            else if(islower(word[i])){
                countLower++;
            }
        }

        if(countUpper == n || countLower == n){
            return true;
        }
        else if ((countUpper == 1 && idx == 0) || (countUpper == n)){
            return true;
        }
        return false;
    }
};