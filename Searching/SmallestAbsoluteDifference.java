package Searching;
/*
========================================================
Problem: Find Smallest Absolute Difference
========================================================

Description:
Find the element having the smallest absolute
difference from k.

If multiple elements have the same minimum difference,
print the smaller element.

Input Format:
n k
n integers

Output Format:
Closest element

Sample Input:
5 10
1 5 9 12 14

Sample Output:
9

Approach:
Compute absolute difference for every element.

Time Complexity: O(n)
Space Complexity: O(1)

========================================================
*/

import java.util.*;

public class SmallestAbsoluteDifference {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[n];

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int ans = arr[0];
        int minDiff = Math.abs(arr[0] - k);

        for(int i = 1; i < n; i++) {

            int diff = Math.abs(arr[i] - k);

            if(diff < minDiff) {
                minDiff = diff;
                ans = arr[i];
            }
            else if(diff == minDiff && arr[i] < ans) {
                ans = arr[i];
            }
        }

        System.out.println(ans);
    }
}