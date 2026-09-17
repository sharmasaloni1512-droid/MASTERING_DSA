class Solution(object):
    
    def longestPalindromeSubseq(self, s):
        """
        :type s: str
        :rtype: int
        """
        memo = {}
        def f(i,j):
            if i == j:
                return 1
            if i > j:
                return 0
            if (i,j) in memo:
                return memo[(i,j)]
            
            if s[i] == s[j]:
                memo[(i,j)] = 2 + f(i+1, j-1)
            else:
                memo[(i,j)] = max(f(i + 1, j), f(i, j - 1))
            return memo[(i,j)]

        return f(0, len(s) - 1)
    
        