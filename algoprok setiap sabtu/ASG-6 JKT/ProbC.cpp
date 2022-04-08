#include <stdio.h>


int main(){
	long int a, b;
	scanf("%ld", &a);
	
	for(int set=0; set< a; set++){
		scanf("%ld", &b);
		long int c[b], d[b];
		////
		for(int set1=0; set1<b; set1++){
			scanf("%ld", &c[set1]);
		}
		for(int set1=0; set1<b; set1++){
			scanf("%ld", &d[set1]);
		}
		////
		long int sum=0;
		for(int set2=0; set2<b; set2++){
			if(c[set2]<d[set2]){
				sum+=1;
			}
		}
		printf("Case #%d: %ld\n", set+1, sum);
	}
	
	
	
	
	
	return 0;
}
