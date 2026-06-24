package Searching;
/*
========================================================
Problem: Find Smallest and Largest Numbers
========================================================

Description:
Find the minimum and maximum elements in an array.

Input Format:
n
n integers

Output Format:
smallest largest

Sample Input:
10
43 53 13 2 44 55 35 56 34 256

Sample Output:
2 256

Approach:
Maintain min and max while traversing.

Time Complexity: O(n)
Space Complexity: O(1)

========================================================
*/

import java.util.*;

public class SmallestAndLargest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int min = arr[0];
        int max = arr[0];

        for(int i = 1; i < n; i++) {
            min = Math.min(min, arr[i]);
            max = Math.max(max, arr[i]);
        }

        System.out.println(min + " " + max);
    }
}