# 1317. Convert Integer to the Sum of Two No-Zero Integers

## Problem
Given an integer `n`, find two integers `a` and `b` such that:
- `a + b = n`
- Neither `a` nor `b` contains the digit 0.

---

## Solutions

### Approach 1: Using strings
- Convert integers to strings using `to_string()`.
- Check if the string contains `'0'`.
- Return the first pair `(a, b)` where neither contains 0.

**File:** [approach1.cpp](approach1.cpp)

---

### Approach 2: Digit check without strings
- Check each digit of `a` and `b` directly using modulo `%` and division `/`.
- Return the first pair with no zeros.

**File:** [approach2.cpp](approach2.cpp)

---

## Notes
- Approach 1 is simple and easy to understand.
- Approach 2 avoids string conversion and is slightly faster.
