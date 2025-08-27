# 12. Integer to Roman

## Problem

Given an integer, convert it to a Roman numeral.

Roman numerals are represented by seven symbols:
- I: 1
- V: 5
- X: 10
- L: 50
- C: 100
- D: 500
- M: 1000

Numerals are combined using specific rules, such as using subtractive notation for values like 4 (IV) and 9 (IX). Only powers of 10 (I, X, C, M) can be appended consecutively at most 3 times. Only the following subtractive forms are used: IV (4), IX (9), XL (40), XC (90), CD (400), CM (900).

### Examples

**Input:** num = 3749  
**Output:** "MMMDCCXLIX"  
**Explanation:** 3749 = 3000 (MMM) + 700 (DCC) + 40 (XL) + 9 (IX)

**Input:** num = 58  
**Output:** "LVIII"  
**Explanation:** 50 = L, 8 = VIII

**Input:** num = 1994  
**Output:** "MCMXCIV"  
**Explanation:** 1000 = M, 900 = CM, 90 = XC, 4 = IV

## Constraints

- 1 <= num <= 3999

## Related Link

- [LeetCode - Integer to Roman](https://leetcode.com/problems/integer-to-roman/)
