# 1752. Check if Array Is Sorted and Rotated

## Problem

Given an array `nums`, return `true` if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return `false`.

An array is considered rotated if it is obtained by taking a sorted array and moving some elements from the front to the back.

### Examples

**Input:** nums = [3,4,5,1,2]  
**Output:** true  
**Explanation:** The original array [1,2,3,4,5] was rotated 3 times.

**Input:** nums = [2,1,3,4]  
**Output:** false

**Input:** nums = [1,2,3]  
**Output:** true

### Constraints

- 1 <= nums.length <= 100
- 1 <= nums[i] <= 100
- All elements in `nums` are distinct.

## Explanation

To check if the array is sorted and rotated, count the number of places where the next element is smaller than the current element. If this count is more than 1, return `false`. Also, consider the circular wrap-around between the last and first element.

## Related Link

- [LeetCode - Check if Array Is Sorted and Rotated](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/)
