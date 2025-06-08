# LeetCode Problem #50: Pow(x, n)

## Problem Statement
Implement `pow(x, n)`, which calculates `x` raised to the power `n` (i.e., `x^n`).

## Example 1:
**Input:**
```plaintext
x = 2.00000, n = 10
```
**Output:**
```plaintext
1024.00000
```

## Example 2:
**Input:**
```plaintext
x = 2.10000, n = 3
```
**Output:**
```plaintext
9.26100
```

## Example 3:
**Input:**
```plaintext
x = 2.00000, n = -2
```
**Output:**
```plaintext
0.25000
```
**Explanation:** 2^(-2) = 1 / (2^2) = 1 / 4 = 0.25

## Constraints:
- `-100.0 < x < 100.0`
- `-2^31 <= n <= 2^31 - 1`
- `n` is an integer.
- `x` is a floating-point number.
- Results should be within `10^-4` of the expected answer.

## My Solution
**Runtime:** 0 ms | **Beats:** 100%
**Time Complexity:** O(Log N)
**Memory:** 8.61 MB | **Beats:** 44.84%
**Space Complexity:** O(1)