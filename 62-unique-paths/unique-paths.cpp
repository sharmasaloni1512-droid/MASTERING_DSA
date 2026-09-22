class Solution {
public:
    int topDown(int &m, int &n, int i, int j, vector<vector<int> >& memo){
        if(i == m - 1 && j == n - 1){
            return 1;
        }

        if(i >= m || j >= n){
            return 0;
        }

        if(memo[i][j] != -1){
            return memo[i][j];
        }

        memo[i][j] = topDown(m, n, i+1, j, memo) + topDown(m, n, i, j+1, memo);
        return memo[i][j];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int> > memo(m, vector<int> (n, -1));

        return (topDown(m, n, 0, 0, memo));

    }
};