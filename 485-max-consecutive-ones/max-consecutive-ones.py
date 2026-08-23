class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)

        right = 0
        left = 0
        maxLength = 0

        while right < n:
            if nums[right] == 0:
                if right != n-1:
                    left = right + 1
            
            if nums[right] == 1:
                maxLength = max(maxLength, right - left + 1)
            right += 1

        
        return maxLength

            

        