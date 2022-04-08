#include <stdio.h>

int main() {
    int testN;
    scanf("%d", &testN);
    
    for (int i=0; i<testN; i++) {
        int n;
        scanf("%d", &n);
        int array[n+1][n+1];
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++) {
                scanf("%d", &array[j][k]);
            }
        }
        long long int result[n+1], resultTemp;
        for (int j=0; j<n; j++) {
            result[j] = 0;
        }
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++) {
                result[k] += array[j][k];
            }
        }
        printf("Case #%d: ", i+1);
        for (int j=0; j<n; j++) {
            if (j!=n-1) {
                printf("%lld ", result[j]);
            } else if (j==n-1) {
                printf("%lld", result[j]);
            }
        }
        printf("\n");
    }
}
