#include <stdio.h>

int main() {

    int n = 5;

    /*
        Pattern:
        1
        12
        123
        1234
        12345

        Time Complexity: O(n^2)
        Space Complexity: O(1)
    */

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}