#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
    int sum= a+b;
    int minus= a-b;
    int multiply= a*b;
    int divide= a/b;
    int mod= a%b;

    printf("%d\n%d\n%d\n%d\n%d\n", sum, minus, multiply, divide, mod);


    return 0;
}