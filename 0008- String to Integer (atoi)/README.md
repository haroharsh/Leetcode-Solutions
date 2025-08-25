# 8. String to Integer (atoi)

## Description

Implement the myAtoi(string s)function, which converts a string to a 32-bit signed integer.
The algorithm for `myAtoi(string s)` is as follows:
1. **Whitespace**: Ignore any leading whitespace (`" "`).
2. **Signedness**: Determine the sign by checking if the next character is `'-'` or `'+'`. Assume positivity if neither is present.
3. **Conversion**: Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
4. **Bounds**: If the integer is out of the 32-bit signed integer range \([-2^{31}, 2^{31} - 1]\), then clamp the integer to remain in the range. Specifically, integers less than \(-2^{31}\) should be clamped to \(-2^{31}\), and integers greater than \(2^{31} - 1\) should be clamped to \(2^{31} - 1\).

Return the integer as the final result.

---

## Examples

**Example 1:**

**Input:**  
`s = "42"`  

**Output:**  
`42`  

**Example 2:**

**Input:**  
`s = "   -42"`  

**Output:**  
`-42`

**Example 3:**

**Input:**  
`s = "4193 with words"`  

**Output:**  
`4193`

**Example 4:**

**Input:**  
`s = "words and 987"`  

**Output:**  
`0`

**Example 5:**

**Input:**  
`s = "-91283472332"`  

**Output:**  
`-2147483648`  

---

## Constraints

- `0 <= s.length <= 200`
- `s` consists of English letters (lower-case and upper-case), digits (`0-9`), `' '`, `'+'`, `'-'`, and `'.'`
