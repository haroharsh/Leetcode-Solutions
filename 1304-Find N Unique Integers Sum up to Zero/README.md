# 1304. Find N Unique Integers Sum up to Zero

## Problem

Given an integer `n`, return any array containing `n` unique integers such that they add up to 0.

### Examples

**Input:** n = 5  
**Output:** [-7,-1,1,3,4]  
**Explanation:** There are many possible answers. [-4,-2,0,2,4] and [-3,-1,0,1,3] are also correct.

**Input:** n = 3  
**Output:** [-1,0,1]

**Input:** n = 1  
**Output:** [0]

## Constraints

- 1 <= n <= 1000

## Explanation

If n is odd, include 0 in the result and pair positive and negative integers in the range. If n is even, pair up positive and negative values so their sum is zero.

## Related Link

- [LeetCode - Find N Unique Integers Sum up to Zero](https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/)
