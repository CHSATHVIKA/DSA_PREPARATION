# Bubble Sort

## What is Bubble Sort?

Bubble Sort is a simple sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order.

After every pass, the largest element moves to its correct position.

This movement resembles air bubbles rising to the surface, hence the name Bubble Sort.

---

## Working

Array:

[5, 3, 8, 2]

Pass 1:

5 > 3 → Swap

[3, 5, 8, 2]

8 > 2 → Swap

[3, 5, 2, 8]

Largest element (8) reaches its correct position.

---

Pass 2:

5 > 2 → Swap

[3, 2, 5, 8]

---

Pass 3:

3 > 2 → Swap

[2, 3, 5, 8]

Array Sorted.

---

## Algorithm

1. Traverse the array.
2. Compare adjacent elements.
3. Swap if left element is greater.
4. Repeat until array becomes sorted.

---

## Time Complexity

| Case | Complexity |
|--------|-----------|
| Best Case | O(n) |
| Average Case | O(n²) |
| Worst Case | O(n²) |

---

## Space Complexity

O(1)

---

## Advantages

- Easy to understand.
- Easy to implement.
- No extra memory required.

---

## Disadvantages

- Slow for large datasets.
- High number of comparisons.

---

## Real-Life Example

Imagine arranging students by height in a line.

You compare neighboring students and swap them whenever they are standing in the wrong order.

Eventually everyone reaches the correct position.

---

## Problems Solved

1. Bubble Sort Ascending Order
2. Bubble Sort Descending Order
3. Optimized Bubble Sort
4. Bubble Sort String Array