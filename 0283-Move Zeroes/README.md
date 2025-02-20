# LeetCode 283: Move Zeroes

## Problem Statement

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

### Constraints:
- `1 <= nums.length <= 10^4`
- `-2^31 <= nums[i] <= 2^31 - 1`

### Example 1:
#### Input:
```plaintext
nums = [0,1,0,3,12]
```
#### Output:
```plaintext
[1,3,12,0,0]
```

### Example 2:
#### Input:
```plaintext
nums = [0]
```
#### Output:
```plaintext
[0]
```

### Note:
- You must do this in-place without making a copy of the array.
- Minimize the total number of operations.


## My Solution
**Runtime:** 0 ms | **Beats:** 100%
**Time Complexity:** O(N)
**Memory:** 23.74 MB | **Beats:** 78.48%
**Space Complexity:** O(1)