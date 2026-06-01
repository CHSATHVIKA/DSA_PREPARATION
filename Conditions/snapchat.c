#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

int s = 0;
        int maxi = 0;

        for (int i = 0; i < n; i++) {

       
            if (a[i] > 0 && b[i] > 0) {
                s++;
            }

            else {
                s = 0;
            }

            if (s > maxi) {
                maxi = s;
            }
        }

        printf("%d\n", maxi);
    }
    return 0;
}
