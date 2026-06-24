# /*

File Name : Single_Number_Using_XOR.c
Topic     : Arrays | Bit Manipulation (XOR)
===========================================

## PROBLEM

Given an array where every element appears exactly twice except one element.

Find the element that appears only once.

Example:

Input:
5
9 1 9 2 1

Output:
2

## INPUT FORMAT

First line contains N.

Second line contains N space separated integers.

## OUTPUT FORMAT

Print the element that appears only once.

## EXPLANATION

We use XOR operation.

Important Properties:

a ^ a = 0
a ^ 0 = a

When all numbers are XORed together,
duplicate numbers cancel each other.

Example:

9 ^ 1 ^ 9 ^ 2 ^ 1

= 9 ^ 9 ^ 1 ^ 1 ^ 2

= 0 ^ 0 ^ 2

= 2

Therefore 2 is the answer.

## CODE

*/

#include <stdio.h>

int singleNumber(int arr[], int n)
{
int answer = 0;

```
for(int i = 0; i < n; i++)
{
    answer ^= arr[i];
}

return answer;
```

}

int main()
{
int n;
scanf("%d", &n);

```
int arr[n];

for(int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}

printf("%d\n", singleNumber(arr, n));

return 0;
```

}

## /*

## TIME COMPLEXITY

O(n)

## SPACE COMPLEXITY

O(1)

## SAMPLE INPUT

5
9 1 9 2 1

## SAMPLE OUTPUT

2
*/
