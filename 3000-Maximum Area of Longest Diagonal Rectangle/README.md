# 3000. Maximum Area of Longest Diagonal Rectangle

## Problem

You are given a 2D integer array `dimensions` where `dimensions[i] = [length_i, width_i]` represents the dimensions of the \(i^{th}\) rectangle.

Return the **area** of the rectangle having the **longest diagonal**. If there are multiple rectangles with the longest diagonal, return the area of the rectangle with the **maximum area** among them.

For a rectangle with sides \(a\) and \(b\), the length of the diagonal is \(\sqrt{a^2 + b^2}\).

### Example

**Input:** `dimensions = [[9,3],[8,6]]`  
**Output:** `48`  
**Explanation:**  
- Rectangle 1: diagonal = \(\sqrt{9^2 + 3^2} = \sqrt{90}\), area = 27  
- Rectangle 2: diagonal = \(\sqrt{8^2 + 6^2} = \sqrt{100}\), area = 48  
Rectangle 2 has the longest diagonal and area=48.

### Example 2

**Input:** `dimensions = [[3,4],[4,3]]`  
**Output:** `12`  
**Explanation:** Both rectangles have the same diagonal (\(\sqrt{25}=5\)), but area is also the same: 12.

## Constraints

- \( 1 \leq dimensions.length \leq 100 \)
- \( 1 \leq length_i, width_i \leq 100 \)

## Related Link

- [LeetCode - Maximum Area of Longest Diagonal Rectangle](https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/)
