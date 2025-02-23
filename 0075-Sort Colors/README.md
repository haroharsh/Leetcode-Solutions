# Sort Colors (Medium)

## Problem Statement
Given an array `nums` with `n` objects colored red, white, or blue, sort them **in-place** so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers `0`, `1`, and `2` to represent the colors:
- `0` for red
- `1` for white
- `2` for blue

You must solve this problem without using the library's sort function.

### Example 1:
**Input:** `nums = [2,0,2,1,1,0]`

**Output:** `[0,0,1,1,2,2]`

### Example 2:
**Input:** `nums = [2,0,1]`

**Output:** `[0,1,2]`

## Constraints:
- `n == nums.length`
- `1 <= n <= 300`
- `nums[i]` is `0`, `1`, or `2`.

## My Solution
**Runtime:** 0 ms | **Beats:** 100%
**Time Complexity:** O(Log N)
**Memory:** 11.76 MB | **Beats:** 32.12%
**Space Complexity:** O(1)
