class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int ret = 0;
        while (left < right)
        {
            ret = max(ret, min(height[left], height[right]) * (right - left));
            if (height[left] <= height[right])
                left += 1;
            else
                right -= 1;
        }
        return ret;
    }
};