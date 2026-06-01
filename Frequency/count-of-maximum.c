void mostFrequent(int a[], int n, int *v, int *f) {
    // write your code here 
    int freq[10001]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    int mc=0;
    int index=0;
    for(int i=0;i<=10000;i++){
        if(freq[i]>mc){
            mc=freq[i];
            index=i;
        }
    }
   *v = index;
*f = mc;
}
