# LeetCode 121: Best Time to Buy and Sell Stock

## Problem Statement

You are given an array `prices` where `prices[i]` is the price of a given stock on the `i`-th day.

You want to maximize your profit by choosing a **single day** to buy one stock and choosing a **different day** in the future to sell it.

Return the **maximum profit** you can achieve from this transaction. If no profit can be achieved, return `0`.

## Example 1:

**Input:**  
`prices = [7,1,5,3,6,4]`

**Output:**  
`5`

**Explanation:**  
Buy on day 2 (`price = 1`) and sell on day 5 (`price = 6`), profit = `6 - 1 = 5`.

## Example 2:

**Input:**  
`prices = [7,6,4,3,1]`

**Output:**  
`0`

**Explanation:**  
In this case, no transactions can be made since prices are always decreasing.

## Constraints:

- `1 <= prices.length <= 10^5`
- `0 <= prices[i] <= 10^4`

## MY Solution
**Runtime:** 0 ms | **Beats:** 100%
**Time Complexity:** O(N)
**Memory:** 15.45 MB | **Beats:** 18.78%
**Space Complexity:** O(1)