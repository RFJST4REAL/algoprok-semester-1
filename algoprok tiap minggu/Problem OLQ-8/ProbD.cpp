#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	for(int i=0; i<a; i++){
		long int b;
		scanf("%ld", &b);
		
		int count=0;
		int j=1;
		while (j*j <= b){
        	if (b % j == 0){
        		count++;
        		if (b/j != j){
        			count++;
				}
			}
        	j++;	
		}
		printf("Case #%d: %ld\n", i+1, count);
	}
	
	return 0;
}
