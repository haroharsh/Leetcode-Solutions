# LeetCode 27: Remove Element

## Problem Statement
Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` in-place. The order of the elements may be changed. Then return the number of elements in `nums` which are not equal to `val`.

It does not matter what values are left beyond the returned length.

### Example 1:
**Input:**
```
nums = [3,2,2,3], val = 3
```
**Output:**
```
2, nums = [2,2,_,_]
```
Explanation: The function should return `2`, with the first two elements of `nums` being `2`. It does not matter what is left beyond the returned length.

### Example 2:
**Input:**
```
nums = [0,1,2,2,3,0,4,2], val = 2
```
**Output:**
```
5, nums = [0,1,4,0,3,_,_,_]
```
Explanation: The function should return `5`, with the first five elements of `nums` being `0,1,4,0,3`. The order does not matter beyond the returned length.

## Constraints
- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`

## My Solution
**Runtime:** 0 ms | **Beats:** 100%
**Time Complexity:** O(N)
**Memory:** 41.93 MB | **Beats:** 65.56%
**Space Complexity:** O(1)