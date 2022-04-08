#include <stdio.h>

int binarySearch(long long int arr[], int l, int r, long long int find) {
    if (r >= l) {
        long long int mid = l + (r - l) / 2;
        if (find >= arr[mid] && mid == r) {
            return mid+1;
        }
        if (find >= arr[mid] && find < arr[mid+1]) {
            return mid+1;
        }
        if (find < arr[mid] && find < arr[mid+1]) {
            return binarySearch(arr, l, mid-1, find);
        }
        return binarySearch(arr, mid+1, r, find);
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    long long int arr[n+1];
    long long int arrF[n+1];
    for (int i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
    }
    for (int i=0; i<n; i++) {
        if (i!=0) {
            arr[i]+=arr[i-1];
        }
        printf("%lld\n", arr[i]);
    }
//    for (int i=0; i<n; i++) {
//        arrF[i] = arr[i];
//    }
//    int q;
//    scanf("%d", &q);
//    for (int j=0; j<q; j++) {
//        long long int m;
//        scanf("%lld", &m);
//        int result = binarySearch(arrF, 0, n-1, m);
//        printf("Case #%d: %d\n", j+1, result);
//    }
}
