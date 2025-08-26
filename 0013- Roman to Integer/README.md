# 13. Roman to Integer

## Problem

Given a Roman numeral, convert it to an integer.

Roman numerals are represented by seven different symbols:
- I: 1
- V: 5
- X: 10
- L: 50
- C: 100
- D: 500
- M: 1000

Numbers are formed by combining these symbols and adding their values. When a smaller symbol appears before a larger one, subtract the smaller from the larger (for example, IV = 4).

### Examples

**Input:** s = "III"  
**Output:** 3

**Input:** s = "LVIII"  
**Output:** 58  
**Explanation:** L = 50, V = 5, III = 3.

**Input:** s = "MCMXCIV"  
**Output:** 1994  
**Explanation:** M = 1000, CM = 900, XC = 90, IV = 4.

## Constraints

- 1 <= s.length <= 15
- s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
- It is guaranteed that s is a valid Roman numeral.

## Related Link

- [LeetCode - Roman to Integer](https://leetcode.com/problems/roman-to-integer/)
