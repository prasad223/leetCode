#!/usr/bin/env python
# -*- coding: utf-8 -*-


class Solution(object):
  def jump(self,nums):
      	""" Function takes list of numbers as input and returns the no of jumps 
      	required to reach the end of the list
      	nums: List[int]
      	rtype: int """
      	count = 0
      	jump_count = 0
	final_pos = len(nums)
	if len(nums) == 1:
           return jump_count
        
            
     	return jump_count




if __name__ == "__main__":
   sol = Solution()
   print(sol.jump([1]))
   print(sol.jump([1,2]))
   print(sol.jump([2,3,1,1,4]))
   
