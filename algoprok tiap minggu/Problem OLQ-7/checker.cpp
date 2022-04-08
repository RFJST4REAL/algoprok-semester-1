#include<stdio.h>

int main(){
	
	int i=1;
	int x;
	scanf("%d", &x);
	int count=0;
	while (i*i <= x){
        if (x % i == 0){
        	count++;
        	if (x/i != i){
        		count++;
			}
		}
        i += 1;	
	}printf("%d", count);
	
	return 0;
}

        
