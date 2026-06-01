#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int c[n], t[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
    int min1 = 1000000;
    int min2 = 1000000;
    int min3 = 1000000;

    for (int i = 0; i < n; i++) {

        if (t[i] == 1 && c[i] < min1) {
            min1 = c[i];
        }

        else if (t[i] == 2 && c[i] < min2) {
            min2 = c[i];
        }

        else if (t[i] == 3 && c[i] < min3) {
            min3 = c[i];
        }
    }

    int ans;

    if (min1 + min2 < min3) {
        ans = min1 + min2;
    }

    else {
        ans = min3;
    }

    printf("%d\n", ans);

    return 0;
}