# LeetCode 26: Remove Duplicates from Sorted Array

## Problem Statement

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only once. The **relative order** of the elements should be kept the same. Then return the number of unique elements in `nums`.

Since the modification is done in-place, the first `k` elements of `nums` should hold the final result. It does not matter what you leave beyond the first `k` elements.

### Example 1:
**Input:** `nums = [1,1,2]`
**Output:** `2, nums = [1,2,_]`

### Example 2:
**Input:** `nums = [0,0,1,1,1,2,2,3,3,4]`
**Output:** `5, nums = [0,1,2,3,4,_]`

### Constraints:
- `1 <= nums.length <= 3 * 10^4`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in **non-decreasing** order.

### Follow-up:
Can you solve this problem with **O(1) extra memory**?

## My Solution
**Runtime:** 0 ms | **Beats:** 100%
**Time Complexity:** O(N)
**Memory:** 22.72 MB | **Beats:** 19.85%
**Space Complexity:** O(1)