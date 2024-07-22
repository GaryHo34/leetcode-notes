<!--
tags: [array]
last_update: {'date': '2024-07-22', 'author': 'GaryHo34'}
sidebar_label: 1. Two Sum
title: 1. Two Sum
hide_title: true
-->

## [1. Two Sum](https://leetcode.com/problems/two-sum)

![Static Badge](https://img.shields.io/badge/Easy-No_rating-green?style=flat-square)

一個最直接的想法是，我們可以用兩個迴圈來找出答案

```cpp
// 外部迴圈，我們想要找到對於i位置的數字，有沒有一個數字j，使得nums[i] + nums[j] == target
for (int i = 0; i < nums.size(); i++) {
    // 內部迴圈
    for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
            return {i, j};
        }
    }
}
return {};
```
但這個方法的時間複雜度是$O(n^2)$。如果我們能夠記住已經走過的數字，在遇到新的數字時，我們可以直接查詢是否有對應的數字，這樣的話，我們可以將時間複雜度降到$O(n)$。我們可以嘗試使用`unordered_map`來記錄已經走過的數字。

```cpp
unordered_map<int, int> m;
for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];
    if (m.find(complement) != m.end()) {
        return {m[complement], i};
    }
    m[nums[i]] = i;
}
return {};
```

我們會需要歷遍一次`nums`，所以時間複雜度是$O(n)$。
另外需要一個`unordered_map`來記錄已經走過的數字，所以空間複雜度是$O(n)$。


Time Complexity: $O(n)$

Space Complexity: $O(n)$