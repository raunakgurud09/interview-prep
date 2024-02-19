def maxArea(self, height: List[int]) -> int:

    dis = len(height)
    l, r = 0, len(height) - 1

    res = 0
    while l < r:

        store = (r - l) * min(height[l], height[r])

        if height[l] > height[r]:
            r -= 1
        elif height[r] > height[l]:
            l += 1
        else:
            l += 1
            r -= 1
        res = max(res, store)

    return res
