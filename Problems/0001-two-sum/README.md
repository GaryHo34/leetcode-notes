---
tags: [all my god]
last_update: {'date': '2024-07-16', 'author': 'GaryHo34'}
sidebar_label: 1. Two Sum
title: 1. Two Sum
hide_title: true
---

## [1. Two Sum](https://leetcode.com/problems/two-sum)

![Static Badge](https://img.shields.io/badge/Medium-No_rating-yellow?style=flat-square)

we can bruteforcing all the possible pairs of numbers and check if the sum is equal to the target.

```cpp
for (int i=0; i<n; i++)
    for (int j=0; j<i; j++)
        if (nums[i] + nums[j] == target)
            return {i, j};
```

The time complexity is $O(n^2)$.

### Better solution: Two pointers

The premise of using two pointers is that the array is sorted. We can sort the array first and then use two pointers to find the answer.

Because when we find a pair of numbers that sum greater than the target, we can move the right pointer to the left to make the sum smaller. Similarly, when the sum is smaller than the target, we can move the left pointer to the right to make the sum greater.

```cpp
sort(nums.begin(), nums.end());
int start = 0, end = n-1;
while (start < end) {
    if (nums[start] + nums[end] == target)
        return {start, end};
    else if (nums[start] + nums[end] < target)
        start++;
    else
        end--;
}
```

The time complexity is $O(n\log n)$, because we sort the array first.

### Best solution: Hash Map
Use `unordered_map` can achieve $O(1)$ time complexity for searching. We can store the number and its index in the map, and then check if the complement of the current number is in the map.

```cpp
unordered_map<int, int> m;
for (int i=0; i<n; i++) {
    if (m.find(target - nums[i]) != m.end())
        return {m[target - nums[i]], i};
    m[nums[i]] = i;
}
```

Time Complexity: $O(n)$

Space Complexity: $O(n)$