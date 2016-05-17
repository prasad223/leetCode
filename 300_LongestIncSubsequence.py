#!/usr/bin/env python
import sys

class Solution(object):
    def lengthOfLIS(self, nums):
        """
	
        :type nums: List[int]
        :rtype: int
        """
	lis_total = 0
        lis_count = 1
        curr_count = 1
        for i in range(1,len(nums)):
	    print(nums[i],nums[i-1],lis_count,curr_count)
            if nums[i] > nums[i-1]:
 		curr_count += 1
		if curr_count > lis_count:
		   lis_count = curr_count
	    else:
		curr_count = 0
        return lis_count


if __name__ == "__main__":
    sol = Solution()
    nums = []
    nums = [int(arg) for arg in sys.argv[1:]]
    print(nums,sol.lengthOfLIS(nums))
