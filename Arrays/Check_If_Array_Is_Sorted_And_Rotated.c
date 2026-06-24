# /*

File Name : Check_If_Array_Is_Sorted_And_Rotated.c
Topic     : Arrays
==================

## PROBLEM

Given an array, determine whether it is a sorted array that has been rotated.

Examples:

Input:
6 7 1 2 3 4 5

Output:
true

Explanation:

Original Sorted Array:

1 2 3 4 5 6 7

After rotation:

6 7 1 2 3 4 5

Therefore answer is true.

---

Another Example

Input:
4 5 2 3 1

Output:
false

Explanation:

No sorted array rotation can generate this order.

## INPUT FORMAT

First line contains N.

Second line contains N space separated integers.

## OUTPUT FORMAT

Print true or false.

## APPROACH

For a sorted and rotated array,
there can be at most one position where:

arr[i] > arr[i + 1]

Example:

6 7 1 2 3 4 5

Only one violation:

7 > 1

Count = 1

Valid.

If count becomes greater than 1,
the array is not sorted and rotated.

We use circular traversal:

arr[(i + 1) % n]

to compare the last element with the first element.

## CODE

*/

#include <stdio.h>
#include <stdbool.h>

bool checkSortedAndRotated(int arr[], int n)
{
int count = 0;

```
for(int i = 0; i < n; i++)
{
    if(arr[i] > arr[(i + 1) % n])
    {
        count++;
    }
}

return count <= 1;
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

if(checkSortedAndRotated(arr, n))
{
    printf("true\n");
}
else
{
    printf("false\n");
}

return 0;
```

}

## /*

## TIME COMPLEXITY

O(n)

## SPACE COMPLEXITY

O(1)

## SAMPLE INPUT

7
6 7 1 2 3 4 5

## SAMPLE OUTPUT

true
*/
