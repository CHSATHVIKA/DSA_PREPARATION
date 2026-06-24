# Sort Array by Parity

## Problem Statement

Given an array of integers, sort the array such that all odd numbers appear before all even numbers while maintaining their original relative order.

The relative order of odd numbers and even numbers should remain the same as in the input array.

---

## Input Format

* The first line contains an integer `N` representing the size of the array.
* The second line contains `N` space-separated integers.

---

## Output Format

Print the modified array where:

* All odd numbers come first.
* All even numbers come after odd numbers.
* Relative ordering is preserved.

---

## Constraints

* `1 ≤ N ≤ 10^5`
* `0 ≤ a[i] ≤ 10^9`

---

## Sample Input 1

```text
5
3 1 2 4 5
```

## Sample Output 1

```text
3 1 5 2 4
```

## Explanation

Odd numbers in the array are:
`3, 1, 5`

Even numbers in the array are:
`2, 4`

After arranging odd numbers first while maintaining order:
`3 1 5 2 4`

---

# Approach

1. Create a temporary array.
2. Traverse the original array and store all odd numbers first.
3. Traverse again and store all even numbers.
4. Copy the result back to the original array.

This method preserves the original order of odd and even elements.

---

# Algorithm

1. Read the array elements.
2. Create a new temporary array.
3. Add all odd elements into the temporary array.
4. Add all even elements into the temporary array.
5. Copy temporary array into the original array.
6. Print the final array.

---

# C Program

```c
#include <stdio.h>
#include <stdlib.h>

void sortArrayByParity(int *a, int n) {

    // Create temporary array
    int *r = (int *)malloc(n * sizeof(int));

    int j = 0;

    // Store all odd numbers first
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            r[j++] = a[i];
        }
    }

    // Store all even numbers next
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            r[j++] = a[i];
        }
    }

    // Copy result back to original array
    for (int i = 0; i < n; i++) {
        a[i] = r[i];
    }

    free(r);
}

int main() {

    int n;
    scanf("%d", &n);

    int *nums = (int *)malloc(n * sizeof(int));

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Function call
    sortArrayByParity(nums, n);

    // Print output
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    free(nums);

    return 0;
}
```

---

# Time Complexity

* `O(N)`
  The array is traversed twice.

# Space Complexity

* `O(N)`
  An extra temporary array is used.

---

# Conclusion

This program efficiently rearranges the array by placing all odd numbers before even numbers while maintaining their original order. The solution uses a temporary array to preserve stability and achieves linear time complexity.
