#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        long long x;

        scanf("%d %lld", &n, &x);

        long long a[n];

        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] < x) {
                ans = i + 1;
            }
        }  printf("%d\n", ans);
    }
    return 0;
}