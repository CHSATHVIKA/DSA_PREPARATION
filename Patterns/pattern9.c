#include <stdio.h>

int main() {

    int n = 5;

    /*
            *
           ***
          *****
         *******
        *********
        *********
         *******
          *****
           ***
            *

        Time Complexity: O(n^2)
        Space Complexity: O(1)
    */

    // upper pyramid
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for(int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // lower pyramid
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < i; j++) {
            printf(" ");
        }

        for(int j = 0; j < 2 * (n - i) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}