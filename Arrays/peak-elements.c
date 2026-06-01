void findPeaks(int a[], int n) {

    int found = 0;

    for(int i = 0; i < n; i++) {

        if(i == 0) {

            if(a[i] > a[i + 1]) {
                printf("%d ", a[i]);
                found = 1;
            }
        }
        else if(i == n - 1) {

            if(a[i] > a[i - 1]) {
                printf("%d ", a[i]);
                found = 1;
            }
        }
        else {

            if(a[i] > a[i - 1] && a[i] > a[i + 1]) {
                printf("%d ", a[i]);
                found = 1;
            }
        }
    }
    if(found == 0) {
        printf("-1");
    }
}