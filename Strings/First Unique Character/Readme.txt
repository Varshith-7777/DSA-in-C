# First Unique Character in a String

## Problem
Find the index of the first non-repeating character in a lowercase string.  
Return `-1` if no unique character exists.

## Approach
- Used a frequency array of size 26.
- First pass: Count occurrences using `s[i] - 'a'`.
- Second pass: Traverse string again to preserve order and find first character with frequency 1.

## Complexity
- Time: O(n)
- Space: O(1)

## Lessons Learned
- `s[i] - 'a'` maps characters to 0–25 index range.
- Always re-scan the string when order matters.
- Checking alphabet order ≠ checking string order.
