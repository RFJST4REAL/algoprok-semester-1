#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int set=0; set<a; set++){
        int b;
        scanf("%d", &b);
        int count=0, counter=0;;
        for (int set1=1; set1*set1<=b; set1++){
            if (b % set1==0 && set1 * set1!=b){
                count++;
            } else if (set1*set1 == b) {
                counter+=1;
            } else {
                count+=0;
                counter+=0;
            }
        }
        printf("Case #%d: ", set+1);
        printf("%d\n", count*2 + counter);
    }

    return 0;
}
