# LeetCode 11: Container With Most Water

## Problem Statement
You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `i-th` line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container holds the most water.

Return the **maximum amount of water** a container can store.

**Note:** You may not slant the container.

---

## Example 1

**Input:**  
```
height = [1,8,6,2,5,4,8,3,7]
```

**Output:**  
```
49
```

**Explanation:**
- The lines at index `1` (height `8`) and index `8` (height `7`) form the container that holds the most water.
- The width is `8 - 1 = 7`, and the height is `min(8, 7) = 7`.
- The area is `7 * 7 = 49`.

---

## Example 2

**Input:**  
```
height = [1,1]
```

**Output:**  
```
1
```

**Explanation:**
- The only possible container is formed by the two lines with height `1`.
- The width is `1 - 0 = 1`, and the height is `1`.
- The area is `1 * 1 = 1`.

---

## Constraints
- `n == height.length`
- `2 <= n <= 10^5`
- `0 <= height[i] <= 10^4`

## My Solution
**Runtime:** 0 ms | **Beats:** 100%
**Time Complexity:** O(N)
**Memory:** 63.00 MB | **Beats:** 38.27%
**Space Complexity:** O(1)