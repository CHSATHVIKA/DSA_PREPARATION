# /*

File Name : Missing_Number_In_Permutation_XOR.c
Topic     : Arrays | Bit Manipulation (XOR)
===========================================

## PROBLEM

Given an array containing n distinct numbers taken from the range [0, n],
find the one missing number.

A permutation means every number appears exactly once except the missing one.

Example:

Input:
4
4 2 1 0

Output:
3

Explanation:
The complete range should be:
0 1 2 3 4

The number 3 is missing.

## INPUT FORMAT

The first line contains N (size of array).

The second line contains N space separated integers.

## OUTPUT FORMAT

Print the missing number.

## APPROACH

We use XOR operation.

Important XOR Properties:

1. a ^ a = 0
2. a ^ 0 = a

If we XOR all array elements and XOR all numbers from 0 to n,
all matching numbers cancel each other.

The remaining value will be the missing number.

Example:

Array = [4, 2, 1, 0]

(0 ^ 1 ^ 2 ^ 3 ^ 4)
^
(4 ^ 2 ^ 1 ^ 0)

All common numbers cancel.

Remaining value = 3

## CODE

*/

#include <stdio.h>

int missingNumber(int arr[], int n)
{
int answer = 0;

```
for(int i = 0; i <= n; i++)
{
    answer ^= i;
}

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

printf("%d\n", missingNumber(arr, n));

return 0;
```

}

## /*

## TIME COMPLEXITY

O(n)

## SPACE COMPLEXITY

O(1)

## SAMPLE INPUT

4
4 2 1 0

## SAMPLE OUTPUT

3
*/
