#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);
    while (t--) {
        int m, x, y;
        scanf("%d %d %d", &m, &x, &y);
        int a[m];
        for (int i = 0; i < m; i++) {
            scanf("%d", &a[i]);
        }
        int house[101] = {0};

        int range = x * y;

        for (int i = 0; i < m; i++) {

            int left = a[i] - range;
            int right = a[i] + range;

            if (left < 1) {
                left = 1;
            }

            if (right > 100) {
                right = 100;
            }

            for (int j = left; j <= right; j++) {
                house[j] = 1;
            }
        }
        int safe = 0;

        for (int i = 1; i <= 100; i++) {

            if (house[i] == 0) {
                safe++;
            }
        }

        printf("%d\n", safe);
    }

    return 0;
}