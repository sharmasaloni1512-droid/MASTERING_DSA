class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        left = 0
        right = 1
        countUnique = 1

        while right < n:
            if nums[right - 1] == nums[right]:
                right += 1

            else:
                left += 1
                nums[left] = nums[right]
                right += 1
                countUnique += 1

        left = left + 1
        while left < n:
            nums[left] = '_'
            left += 1

        return countUnique

            