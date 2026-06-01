/*
========================================================
Problem: Pair Sum (Two Pointers)

Description:
Given a sorted array of integers and a target value,
check if there exists a pair of elements whose sum equals the target.

If such a pair exists, print them.
Otherwise, indicate that no such pair exists.

--------------------------------------------------------
Input:
- Integer array (sorted)
- Integer target sum

Output:
- Pair of numbers that add up to target OR
- "No pair found"

--------------------------------------------------------
Example:
Input: arr = [1, 2, 3, 4, 6], target = 6
Output: (2, 4)

Explanation:
2 + 4 = 6

--------------------------------------------------------
Approach (Two Pointers):
1. Take one pointer at start (left)
2. Take one pointer at end (right)
3. Check sum:
   - If sum == target → found
   - If sum < target → move left pointer
   - If sum > target → move right pointer
4. Repeat until left < right

--------------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(1)
========================================================
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int left = 0;
    int right = n - 1;

    int found = 0;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("Pair found: (%d, %d)\n", arr[left], arr[right]);
            found = 1;
            break;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    if (!found) {
        printf("No pair found\n");
    }

    return 0;
}

