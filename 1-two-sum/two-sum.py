class Solution(object):
    def twoSum(self, nums, target):
        hash_map = {}
        for i, nums in enumerate(nums):
            if target-nums in hash_map:
                return [hash_map[target-nums],i]
            hash_map[nums] = i
        return []
        