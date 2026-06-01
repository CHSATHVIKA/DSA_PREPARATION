#include <stdio.h>

/*
========================================================
Problem: Maximum Points You Can Obtain from Cards

Description:
You are given an array of integers representing card points.
You can pick cards from either the beginning or the end.
You must pick exactly k cards.

Find the maximum score you can obtain.

--------------------------------------------------------
Idea (Sliding Window):
Instead of picking k from ends, we find:
Total sum - minimum subarray of size (n - k)

This converts the problem into a sliding window problem.

--------------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(1)
========================================================
*/

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int total = 0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    int windowSize = n - k;

    int windowSum = 0;

    for (int i = 0; i < windowSize; i++) {
        windowSum += arr[i];
    }

    int minSum = windowSum;

    for (int i = windowSize; i < n; i++) {
        windowSum += arr[i] - arr[i - windowSize];

        if (windowSum < minSum) {
            minSum = windowSum;
        }
    }

    printf("Maximum points = %d\n", total - minSum);

    return 0;
}