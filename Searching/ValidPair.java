package Searching;
/*
========================================================
Problem: Find Valid Pair
========================================================

Description:
Given an array and a target value,
find whether there exists a pair whose sum
is equal to the target.

Input Format:
The first line contains n.
The second line contains n integers.
The third line contains the target value.

Output Format:
Print Valid Pair if such a pair exists.
Otherwise print No Valid Pair.

Sample Input:
5
1 2 3 4 5
7

Sample Output:
Valid Pair

Explanation:
2 + 5 = 7

Approach:
1. Generate all possible pairs.
2. Check whether pair sum equals target.
3. If found, print Valid Pair.
4. Otherwise print No Valid Pair.

Time Complexity: O(n²)
Space Complexity: O(1)

========================================================
*/

import java.util.*;

public class ValidPair {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int target = sc.nextInt();

        boolean found = false;

        for(int i = 0; i < n; i++) {

            for(int j = i + 1; j < n; j++) {

                if(arr[i] + arr[j] == target) {
                    found = true;
                    break;
                }
            }

            if(found) {
                break;
            }
        }

        if(found) {
            System.out.println("Valid Pair");
        } else {
            System.out.println("No Valid Pair");
        }
    }
}