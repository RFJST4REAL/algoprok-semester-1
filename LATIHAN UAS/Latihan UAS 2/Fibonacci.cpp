#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    
    long int fibo[c];
    fibo[0]=b;

    for(int set=1; set<c; set++){
        fibo[set]=fibo[set-1]+fibo[set-2];
    }
    printf("%lld\n", fibo[c-1]);

    return 0;
}