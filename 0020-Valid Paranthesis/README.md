# 20. Valid Parentheses

## Problem

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:
- Open brackets are closed by the same type of brackets.
- Open brackets are closed in the correct order.
- Every close bracket has a corresponding open bracket before it.

### Examples

**Input:** s = "()"
**Output:** true

**Input:** s = "()[]{}"
**Output:** true

**Input:** s = "(]"
**Output:** false

## Constraints

- 1 <= s.length <= 10^4
- `s` consists of parentheses only `'()[]{}'`.

## Explanation

Use a stack to keep track of opening brackets. For every closing bracket, check if the top of the stack has the matching opening bracket. If not, the string is invalid. At the end, the stack should be empty for the string to be valid.

## Related Link

- [LeetCode - Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
