# 73. Set Matrix Zeroes

## Problem

Given an `m x n` integer matrix, if an element is 0, set its entire row and column to 0. You must do it **in place**.

### Examples

**Input:**  
matrix = [[1,1,1],[1,0,1],[1,1,1]]  
**Output:**  
[[1,0,1],[0,0,0],[1,0,1]]

**Input:**  
matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]  
**Output:**  
[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

## Constraints

- 1 <= m, n <= 200
- -2³¹ <= matrix[i][j] <= 2³¹ - 1

## Follow-up

- A straightforward solution uses O(m + n) space, but can you do it in O(1) space?

## Related Link

- [LeetCode - Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)
