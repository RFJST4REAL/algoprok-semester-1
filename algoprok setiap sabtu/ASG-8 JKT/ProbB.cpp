#include <stdio.h>

int main(){
	int a;
	
	scanf("%d", &a);
	long int b[a];
	for(int set=0; set<a; set++){
		scanf("%ld", &b[set]);	
	}
	long int sum=0;
	for(int set=0; set<a; set++){
		if(b[set]>0){	
			sum+= b[set];
		}
	}
	printf("%ld\n", sum);
	
	
	return 0;
}
