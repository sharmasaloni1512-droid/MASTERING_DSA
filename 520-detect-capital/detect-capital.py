class Solution(object):
    def detectCapitalUse(self, word):
        """
        :type word: str
        :rtype: bool
        """

        n = len(word)
        countUpper = 0
        countLower = 0

        for idx,char in enumerate(word):
            if char.isupper():
                countUpper += 1
                idx_val = idx

            elif char.islower():
                countLower += 1

        if(countUpper == n or countLower == n):
            return True

        elif (countUpper == 1 and idx_val == 0):
            return True
        
        return False
        