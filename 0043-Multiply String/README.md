# 43. Multiply Strings

## Problem

Given two non-negative integers `num1` and `num2` represented as strings, return the product of `num1` and `num2`, also represented as a string.

**Note:** You must not use any built-in BigInteger library or convert the inputs to integers directly.

### Examples

**Input:** num1 = "2", num2 = "3"  
**Output:** "6"

**Input:** num1 = "123", num2 = "456"  
**Output:** "56088"

## Constraints

- 1 <= num1.length, num2.length <= 200
- num1 and num2 consist of digits only.
- Both num1 and num2 do not contain any leading zeros, except the number 0 itself.

## Explanation

The solution simulates the traditional grade-school multiplication. It multiplies each digit of `num1` by each digit of `num2` and stores the result in an array to handle digit-by-digit multiplication and carry management.

## Related Link

- [LeetCode - Multiply Strings](https://leetcode.com/problems/multiply-strings/)
