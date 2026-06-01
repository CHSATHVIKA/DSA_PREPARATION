#include <stdio.h>

int main() {

    int n = 5;

    /*
        Pattern:
        1
        22
        333
        4444
        55555

        Time Complexity: O(n^2)
        Space Complexity: O(1)
    */

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}