package Searching;
/*
========================================================
Problem: Linear Search in Array
========================================================

Description:
Given an array of integers and a target element,
find the index of the target element using Linear Search.

Input Format:
The first line contains n.
The second line contains n integers.
The third line contains the target element.

Output Format:
Print the index of the target element.
Print -1 if the element is not found.

Sample Input:
5
10 20 30 40 50
30

Sample Output:
2

Approach:
Traverse the array and compare each element
with the target.

Time Complexity: O(n)
Space Complexity: O(1)

========================================================
*/

import java.util.*;

public class LinearSearchArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int target = sc.nextInt();

        int ans = -1;

        for(int i = 0; i < n; i++) {
            if(arr[i] == target) {
                ans = i;
                break;
            }
        }

        System.out.println(ans);
    }
}