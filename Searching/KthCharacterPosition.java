package Searching;

/*
========================================================
Problem: Find Kth Character Position
========================================================

Description:
Given a string s1, a character c1, and an integer k,
find the position of the kth occurrence of c1.

If the kth occurrence does not exist, print -1.

Input Format:
String Character K

Output Format:
Position of kth occurrence or -1.

Sample Input:
HelloHowyoudoing H 2

Sample Output:
5

Approach:
Traverse the string and count occurrences.

Time Complexity: O(n)
Space Complexity: O(1)

========================================================
*/

import java.util.*;

public class KthCharacterPosition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.next();
        char ch = sc.next().charAt(0);
        int k = sc.nextInt();

        int count = 0;
        int ans = -1;

        for(int i = 0; i < str.length(); i++) {
            if(str.charAt(i) == ch) {
                count++;

                if(count == k) {
                    ans = i;
                    break;
                }
            }
        }

        System.out.println(ans);
    }
}