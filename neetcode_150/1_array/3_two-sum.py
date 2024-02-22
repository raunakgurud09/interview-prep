def twoSum(self, nums: List[int], target: int) -> List[int]:
    hashmap = {}  # val -> index

    for i, val in enumerate(nums):
        diff = target - val
        if diff in hashmap:
            return [hashmap[diff], i]
        hashmap[val] = i
