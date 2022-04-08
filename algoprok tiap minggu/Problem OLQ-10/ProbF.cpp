#include <stdio.h>

int main(){
	
	int a;
	scanf("%d", &a);
	
	for(int set=0; set<a; set++){
		long long int b;
		long long int c[101]={};
		scanf("%lld", &b);
		long long int count=0;
		while(b>0){
			c[count]=b%2;
			b/=2;
			count++;
		}
		printf("Case #%d: ", set+1);
		for(int set1=count-1; set1>=0; set1--){
			printf("%lld", c[set1]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
