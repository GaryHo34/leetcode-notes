### Note

In the first glance of this problem, we may think that we can bruteforce all the possible pairs of lines and find the maximum area. However, this will lead to $O(n^2)$ time complexity.

```cpp
int maxArea(vector<int>& height) {
    int n = height.size();
    int ans = 0;
    for (int i=0; i<n; i++)
        for (int j=0; j<i; j++)
            ans = max(ans, min(height[i], height[j]) * (i - j));
    return ans;
}
```

We can look at the formula to calculate the area:

$$area = min( left , right ) * (right - left)$$

We can found that if we move the smaller one, we will have chance to find a larger area. Moving the larger one will only make the area smaller.

This reminds us to use two pointers to solve this problem. We can start from the two ends of the array and move the smaller one to the middle. This will guarantee that we will find the largest area.


Time Complexity: $O(n)$

Space Complexity: $O(1)$