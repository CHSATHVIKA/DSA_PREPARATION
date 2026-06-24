package Searching;

/*
========================================================
Problem: Linear Search in String
========================================================

Description:
Given a string and a character,
determine whether the character exists in the string.

Input Format:
The first line contains a string.
The second line contains a character.

Output Format:
Print Found if character exists.
Otherwise print Not Found.

Sample Input:
HELLO
L

Sample Output:
Found

Approach:
Traverse each character of the string.
Compare it with the target character.

Time Complexity: O(n)
Space Complexity: O(1)

========================================================
*/

import java.util.*;

public class LinearSearchString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.next();
        char target = sc.next().charAt(0);

        boolean found = false;

        for(int i = 0; i < str.length(); i++) {
            if(str.charAt(i) == target) {
                found = true;
                break;
            }
        }

        System.out.println(found ? "Found" : "Not Found");
    }
}