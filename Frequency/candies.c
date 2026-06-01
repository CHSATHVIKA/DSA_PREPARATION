#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int a[2 * n];

        for(int i = 0; i < 2 * n; i++) {
            scanf("%d", &a[i]);
        }
        int flag = 0;

        for(int i = 0; i < 2 * n; i++) {

            int count = 0;

            for(int j = 0; j < 2 * n; j++) {

                if(a[i] == a[j]) {
                    count++;
                }
            }
            if(count > 2) {
                flag = 1;
                break;
            }
        }
        if(flag == 1) {
            printf("No\n");
        }
        else {
            printf("Yes\n");
        }
    }
    return 0;
}