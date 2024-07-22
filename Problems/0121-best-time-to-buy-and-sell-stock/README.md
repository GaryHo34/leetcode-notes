<!--
tags: [greedy, array]
last_update: {'date': '2024-07-22', 'author': 'GaryHo34'}
sidebar_label: 121. Best Time to Buy and Sell Stock
title: 121. Best Time to Buy and Sell Stock
hide_title: true
-->

## [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock)

![Static Badge](https://img.shields.io/badge/Easy-No_rating-green?style=flat-square)

我們只會用後面遇到的股價減去前面已經握在手中的股票價格，這表示我們的獲利公式是`prices[j] - prices[i]`，其中`j > i`。那麼要最大化收益，我們勢必要讓prices[i]越小越好 (買進價格越低越好)，所以當我們在遍歷的時候，遇到更小的價格，我們不仿讓`prices[i]`更新為更小的價格，這樣在之後的遍歷中，我們就有更大的機會找到更大的獲利。

所以我們可以嘗試用一個變數`min_price`來記錄遍歷過程中的最小價格，然後用`max_profit`來記錄當前的最大獲利。
我們只使用了兩個變數，所以空間複雜度是$O(1)$。但必須要遍歷一次整個數組，所以時間複雜度是$O(n)$。

Time Complexity: $O(n)$

Space Complexity: $O(1)$

