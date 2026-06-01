#include <stdio.h>

int main() {

    int n = 5;

    /*
        *
        * *
        * * *
        * * * *
        * * * * *
        * * * *
        * * *
        * *
        *

        Time Complexity: O(n^2)
        Space Complexity: O(1)
    */

    // upper triangle
    for(int i = 0; i < n; i++) {

        for(int j = 0; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    // lower triangle
    for(int i = 0; i < n - 1; i++) {

        for(int j = 0; j < n - i - 1; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}