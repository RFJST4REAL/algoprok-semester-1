#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int set=0; set<a; set++){
        int b, c;
        scanf("%d %d", &b, &c);

        printf("Case %d:\n", set+1);
        
        long long int d[c+1];
        d[0]=b;
        int var=1;
        for(int i=0; i<=c; i++){
            printf("%lld", d[i]);
            if(i!=c){
                printf(" ");
            }
            d[i+1]= d[i]+var;
            var*=2;
        }
        printf("\n");
    }

    return 0;
}