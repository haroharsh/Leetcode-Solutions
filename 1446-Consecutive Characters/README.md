# 1446. Consecutive Characters

## Problem

Given a string `s`, the **power** of the string is defined as the maximum length of a non-empty substring that contains only one unique character (i.e., all characters in the substring are the same).

Return the power of the string.

### Examples

**Input:** s = "leetcode"  
**Output:** 2  
**Explanation:** "ee" is the longest substring where all characters are the same.

**Input:** s = "abbcccddddeeeeedcba"  
**Output:** 5  
**Explanation:** "eeeee" is the longest substring of one unique character.

**Input:** s = "triplepillooooow"  
**Output:** 5  
**Explanation:** "ooooo" is the longest substring.

## Constraints

- 1 <= s.length <= 500
- s consists of only lowercase English letters.

## Explanation

Traverse the string while counting the length of consecutive identical characters. Return the maximum such streak found.

## Related Link

- [LeetCode - Consecutive Characters](https://leetcode.com/problems/consecutive-characters/)
