class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();

        if(n == 1){
            return s;
        }
        string s_first = "", s_second = "";

        for(int i = 0; i < n / 2; i++){
            s_first += s[i];
        }

        sort(s_first.begin(), s_first.end());

        int starting_range;
        if(n % 2 == 0){
            starting_range = n / 2;
        }
        else{
            starting_range = (n / 2) + 1;
            s_first += s[n/2];
        }
        for(int i = starting_range ; i<n; i++){
            s_second += s[i];
        }

        sort(s_second.begin(), s_second.end());
        reverse(s_second.begin(), s_second.end());

        return (s_first + s_second);

    }
};