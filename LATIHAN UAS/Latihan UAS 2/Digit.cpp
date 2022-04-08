#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    for(int set=0; set<a; set++){
        int b;
        scanf("%d", &b);
        long long int c[b];

        for(int i=0; i<b; i++){
            scanf("%lld", &c[i]);
        }
        
    }

    return 0;
}