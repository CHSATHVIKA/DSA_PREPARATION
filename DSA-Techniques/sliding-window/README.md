# Sliding Window Technique

## Overview

Sliding Window is a problem-solving technique used to efficiently handle problems involving **contiguous subarrays or substrings**.

Instead of recalculating values for every subarray, a “window” is maintained and adjusted dynamically.

---

## Core Idea

Maintain a window over the array:

- Expand the window by adding elements
- Shrink the window when a condition is violated
- Keep updating result during traversal

This avoids repeated computation.

---

## When to Use

Use Sliding Window when problems involve:

- Subarrays or substrings
- Maximum or minimum in a range
- Continuous sequence problems
- Fixed or variable size window

---

## Types of Sliding Window

### 1. Fixed Window
Window size is constant

Example:
- Maximum sum of subarray of size k

---

### 2. Variable Window
Window size changes dynamically based on conditions

Example:
- Longest substring without repeating characters
- Maximum points from cards

---

## Time Complexity

- Time: O(n)
- Space: O(1) or O(k) depending on problem

---

## Key Insight

Instead of recomputing results for every range, reuse previous computation by sliding the window forward.

---

## Status

Currently learning phase.