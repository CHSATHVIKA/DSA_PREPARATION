#include <stdio.h>

int main() {

    int n = 5;

    // Time Complexity: O(n^2)
    // Space Complexity: O(1)

    for(int i = 0; i < n; i++) {

        for(int j = 0; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}