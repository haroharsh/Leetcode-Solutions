# LeetCode Problem 2460: Apply Operations to an Array

## Problem Statement

Given an array of integers `nums`, perform the following operations:

1. **Adjacent Equal Elements**: If two **adjacent** elements are **equal**, double the value of the first element and set the second element to `0`.

2. **Shift Zeros**: After completing the above operation, **shift all `0` elements to the end** of the array while maintaining the relative order of the non-zero elements.

Return the resulting array after performing these operations.

## Examples

**Example 1:**

- **Input:** `nums = [1,2,2,1,1,0]`
- **Output:** `[1,4,2,0,0,0]`
- **Explanation:**
  - Step 1: Perform operations:
    - `nums[1]` and `nums[2]` are equal; double `nums[1]` to get `4` and set `nums[2]` to `0`.
    - `nums[3]` and `nums[4]` are equal; double `nums[3]` to get `2` and set `nums[4]` to `0`.
    - Resulting array: `[1,4,0,2,0,0]`
  - Step 2: Shift zeros to the end:
    - Final array: `[1,4,2,0,0,0]`

**Example 2:**

- **Input:** `nums = [0,1]`
- **Output:** `[1,0]`
- **Explanation:**
  - Step 1: No adjacent equal elements; array remains `[0,1]`.
  - Step 2: Shift zeros to the end:
    - Final array: `[1,0]`

## Constraints

- The length of the array `nums` is between `1` and `1000` (inclusive).
- Each element in `nums` is an integer between `0` and `1000` (inclusive).

## My Solution
**Runtime:** 0 ms | **Beats:** 100%
**Time Complexity:** O(N)
**Memory:** 13.18 MB | **Beats:** 62.61%
**Space Complexity:** O(1)