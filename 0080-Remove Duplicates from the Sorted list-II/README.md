# LeetCode Question 80: Remove Duplicates from Sorted Array II

## Problem Statement

Given an integer array `nums` sorted in **non-decreasing order**, remove some duplicates such that each unique element appears at most **twice**. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the **first part** of the array `nums`. More formally, if there are `k` elements after removing the duplicates, then the first `k` elements of `nums` should hold the final result. It does not matter what you leave beyond the first `k` elements.

Return `k` **after placing the final result in the first `k` slots of `nums`**.

Do **not** allocate extra space for another array. You must do this by **modifying the input array in-place** with `O(1)` extra memory.

## Example 1:

**Input:**
```plaintext
nums = [1,1,1,2,2,3]
```

**Output:**
```plaintext
k = 5, nums = [1,1,2,2,3,_]
```

**Explanation:**
Your function should return `k = 5`, with the first five elements of `nums` being `1, 1, 2, 2, 3`. It does not matter what you leave beyond the returned `k` (hence they are underscored).

## Example 2:

**Input:**
```plaintext
nums = [0,0,1,1,1,1,2,3,3]
```

**Output:**
```plaintext
k = 7, nums = [0,0,1,1,2,3,3,_,_]
```

**Explanation:**
Your function should return `k = 7`, with the first seven elements of `nums` being `0, 0, 1, 1, 2, 3, 3`.

## Constraints:
- `1 <= nums.length <= 3 * 10^4`
- `-10^4 <= nums[i] <= 10^4`
- `nums` is sorted in **non-decreasing** order.

## My Solution
**Runtime:** 3 ms | **Beats:** 80.22%
**Time Complexity:** O(N)
**Memory:** 19.50 MB | **Beats:** 19.52%
**Space Complexity:** O(1)