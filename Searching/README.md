# Searching

## Why Searching?

Searching is one of the most fundamental operations in Data Structures and Algorithms. It helps us locate a specific element, record, or value from a collection of data.

Without searching, finding information in large datasets would be extremely difficult and inefficient.

### Real-Life Examples

- Searching for a contact in a phonebook.
- Finding a product on Amazon.
- Looking for a student record in a database.
- Searching a song in Spotify.
- Finding a file in a computer.

---

# Linear Search

## Concept

Linear Search is the simplest searching algorithm.

It checks each element one by one from the beginning until:

- The target element is found.
- The entire collection is traversed.

Since elements are checked sequentially, it is also called Sequential Search.

---

## Working

Suppose:

Array = [10, 25, 30, 45, 60]

Target = 45

Process:

10 ❌

25 ❌

30 ❌

45 ✅ Found

Index Returned: 3

---

## Algorithm

1. Start from index 0.
2. Compare the current element with the target.
3. If both are equal, return the index.
4. Otherwise move to the next element.
5. Continue until the element is found or the array ends.

---

## Time Complexity

| Case | Complexity |
|--------|-----------|
| Best Case | O(1) |
| Average Case | O(n) |
| Worst Case | O(n) |

### Space Complexity

O(1)

---

## Advantages

- Easy to understand.
- Easy to implement.
- Works on both sorted and unsorted arrays.
- No extra memory required.

---

## Disadvantages

- Slow for large datasets.
- Requires checking elements one by one.
- Not efficient for large collections of data.

---

# Linear Search in Arrays

Searching a target element inside an array by traversing each element sequentially.

Example:

Input:

Array = [5, 10, 15, 20]

Target = 15

Output:

Element Found at Index 2

---

# Linear Search in Strings

Searching a character inside a string by checking each character one by one.

Example:

Input:

String = "HELLO"

Target = 'L'

Output:

Character Found

---

# Problems Solved

### 1. Linear Search in Array

Find the position (index) of a target element in an array.

### 2. Linear Search in String

Search for a character inside a string.

### 3. Find Kth Character Position

Find the position of the Kth occurrence of a given character in a string.

### 4. Find Smallest and Largest Numbers

Traverse the array and identify the minimum and maximum elements.

### 5. Find Smallest Absolute Difference

Find the minimum absolute difference between elements in an array.

### 6. Find Pairs Divisible Sum

Identify or count pairs whose sum is divisible by a given number.

### 7. Find Valid Pair

Determine pairs that satisfy the given condition.

---

# What I Learned

- Sequential Traversal
- Array Searching
- String Searching
- Index Handling
- Character Searching
- Pair-Based Problems
- Min-Max Computation
- Absolute Difference Calculations
- Time Complexity Analysis
- Space Complexity Analysis

---

# Conclusion

Linear Search is the foundation of searching algorithms. Although it is not the most efficient approach for large datasets, it is simple to understand and implement. It introduces important concepts such as traversal, comparison, indexing, and condition checking.

The problems in this folder demonstrate how Linear Search can be applied to arrays, strings, pair-based questions, and numerical analysis problems, making it an excellent starting point for learning searching techniques in Data Structures and Algorithms.