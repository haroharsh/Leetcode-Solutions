# 74. Search a 2D Matrix

## Problem

You are given an `m x n` integer matrix `matrix` with the following two properties:
- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, return `true` if `target` is in `matrix` or `false` otherwise.

### Examples

**Input:**  
matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3  
**Output:** true

**Input:**  
matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13  
**Output:** false

## Constraints

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 100
- -10⁴ <= matrix[i][j], target <= 10⁴

## Explanation

Treat the matrix as a virtual 1D array and use binary search by mapping 1D indices back to 2D coordinates. This achieves O(log(m * n)) time complexity using only constant extra space.

## Related Link

- [LeetCode - Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)
