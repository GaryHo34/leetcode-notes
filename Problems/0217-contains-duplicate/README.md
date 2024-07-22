<!--
tags: [array, hash table]
last_update: {'date': '2024-07-22', 'author': 'GaryHo34'}
sidebar_label: 217. Contains Duplicate
title: 217. Contains Duplicate
hide_title: true
-->

## [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate)

![Static Badge](https://img.shields.io/badge/Easy-No_rating-green?style=flat-square)

### 排序

排序之後，只要有相鄰的元素相等，就表示有重複的元素。排序的時間複雜度是$O(n\log n)$，但我們不需要額外的空間，所以空間複雜度是$O(1)$。

### Hash Table

用一個 hash table 來記錄已經遇到的元素，如果遇到重複的元素，就回傳 `True`。 時間複雜度是$O(n)$，但相對的空間複雜度是$O(n)$，

這邊我們使用Hash Table來解這題

Time Complexity: $O(n)$

Space Complexity: $O(n)$
