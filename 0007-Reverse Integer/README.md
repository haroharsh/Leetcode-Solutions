# LeetCode Question 7: Reverse Integer

## Problem Statement
Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2^31, 2^31 - 1]`, then return `0`.

Assume the environment does not allow storing 64-bit integers (signed or unsigned).

## Examples

### Example 1:
**Input:** `x = 123`

**Output:** `321`

### Example 2:
**Input:** `x = -123`

**Output:** `-321`

### Example 3:
**Input:** `x = 120`

**Output:** `21`

### Example 4:
**Input:** `x = 0`

**Output:** `0`

## Constraints
- `-2^31 <= x <= 2^31 - 1`

## My Solution
**Runtime:** 0 ms | **Beats:** 100%
**Time Complexity:** O(Log N)
**Memory:** 8.53 MB | **Beats:** 32.82%
**Space Complexity:** O(1)