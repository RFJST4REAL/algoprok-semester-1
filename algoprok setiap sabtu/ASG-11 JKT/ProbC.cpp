#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    
    for(int set=0; set<a; set++){
    	long int b, c;
    	long int count=0;
        scanf("%ld %ld", &b, &c); getchar();
        long int A[b];
        for(int set1=0; set1<b; set1++){
            scanf("%ld", &A[set1]);
        }
        for(int set1=0; set1<b; set1++){
            if(A[set1]>=c){
                count++;
        	}
        }
        printf("Case #%d: %ld\n", set+1, count);
    }
    
    return 0;
}
