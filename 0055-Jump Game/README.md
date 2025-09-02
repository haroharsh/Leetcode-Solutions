# LeetCode Question 55: Jump Game

## Problem Statement

You are given an integer array `nums`. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return `true` if you can reach the last index, or `false` otherwise.

## Example 1:

**Input:**  
`nums = [2,3,1,1,4]`

**Output:**  
`true`

**Explanation:**  
Jump 1 step from index 0 to 1, then 3 steps to the last index.

---

## Example 2:

**Input:**  
`nums = [3,2,1,0,4]`

**Output:**  
`false`

**Explanation:**  
You will always arrive at index 3, but its maximum jump length is 0, which prevents you from reaching index 4.

---

## Constraints:
- `1 <= nums.length <= 10^4`
- `0 <= nums[i] <= 10^5`

## My Solution
**Runtime:** 3 ms | **Beats:** 45.47%
**Time Complexity:** O(N)
**Memory:** 46.12 MB | **Beats:** 13.47%
**Space Complexity:** O(1)