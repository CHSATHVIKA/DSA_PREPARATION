package Searching;
/*
========================================================
Problem: Find Pairs Divisible Sum
========================================================

Description:
Given an array of integers and a number k,
find the count of pairs whose sum is divisible by k.

Input Format:
The first line contains n.
The second line contains n integers.
The third line contains k.

Output Format:
Print the count of valid pairs.

Sample Input:
5
2 4 6 8 10
4

Sample Output:
4

Explanation:
Valid Pairs:
(2,6)
(2,10)
(4,8)
(6,10)

Approach:
1. Generate all possible pairs.
2. Calculate pair sum.
3. Check if sum % k == 0.
4. Count valid pairs.

Time Complexity: O(n²)
Space Complexity: O(1)

========================================================
*/

import java.util.*;

public class PairsDivisibleSum {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int k = sc.nextInt();

        int count = 0;

        for(int i = 0; i < n; i++) {

            for(int j = i + 1; j < n; j++) {

                if((arr[i] + arr[j]) % k == 0) {
                    count++;
                }
            }
        }

        System.out.println(count);
    }
}