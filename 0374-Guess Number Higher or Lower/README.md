# LeetCode Question 374: Guess Number Higher or Lower

## Problem Statement

We are playing the Guess Game. The game is as follows:

I pick a number from **1** to **n**. You have to guess which number I picked.

Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API `int guess(int num)`, which returns three possible results:

- `-1`: My number is lower
- `1`: My number is higher
- `0`: Congrats! You got it!

### Example 1:

```
Input: n = 10, pick = 6
Output: 6
```

### Example 2:

```
Input: n = 1, pick = 1
Output: 1
```

### Example 3:

```
Input: n = 2, pick = 1
Output: 1
```

### Constraints:

- `1 <= n <= 2^31 - 1`
- `1 <= pick <= n`

## My Solution
**Runtime:** 2 ms | **Beats:** 53.92%
**Time Complexity:** O(log N)
**Memory:** 7.98 MB | **Beats:** 39.92%
**Space Complexity:** O(1)