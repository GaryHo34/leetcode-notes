class Solution:
    def maxArea(self, height: List[int]) -> int:
        l, r = 0, len(height) - 1
        max_volume = 0
        while l < r:
            if height[l] < height[r]:
                max_volume = max(max_volume, height[l] * (r-l))
                l+=1
            elif height[l] >= height[r]:
                max_volume = max(max_volume, height[r] * (r-l))
                r-=1
        return max_volume