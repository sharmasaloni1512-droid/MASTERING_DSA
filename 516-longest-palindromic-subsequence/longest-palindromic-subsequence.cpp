class Solution {
public:

    int f(int i, int j, string &s, vector<vector<int>> &memo) {
        if (i == j)
            return 1;

        if (i > j)
            return 0;

        if (memo[i][j] != -1)
            return memo[i][j];

        if (s[i] == s[j]) {
            memo[i][j] = 2 + f(i + 1, j - 1, s, memo);
        }
        else {
            memo[i][j] = max(
                f(i + 1, j, s, memo),
                f(i, j - 1, s, memo)
            );
        }

        return memo[i][j];
    }

    int longestPalindromeSubseq(string s) {
        int n = s.length();

        vector<vector<int>> memo(n, vector<int>(n, -1));

        return f(0, n - 1, s, memo);
    }
};