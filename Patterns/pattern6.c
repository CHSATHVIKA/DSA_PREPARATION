#include <stdio.h>

int main() {

    int n = 5;

    /*
        Pattern:
        12345
        1234
        123
        12
        1

        Time Complexity: O(n^2)
        Space Complexity: O(1)
    */

    for(int i = 0; i < n; i++) {

        for(int j = 1; j <= n - i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}