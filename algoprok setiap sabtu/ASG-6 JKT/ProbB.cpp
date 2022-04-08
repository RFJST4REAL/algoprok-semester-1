#include <stdio.h>

int main(){
	int a, b;
	long int sum=0;
	scanf("%d", &a);
	
	for(int set=0; set < a; set++)
	{
		scanf("%d", &b);
		long int c[b][b];
		for(int input=0; input < b; input++){
			for(int input1=0; input1 < b; input1++){
			scanf("%ld", &c[input][input1]);	
			}
		}
	
		printf("Case #%d: ", set+1);
		for(int set1=0; set1 < b; set1++){
			for(int set2=0; set2 < b; set2++){
				for(int set3=set1; set3==set1; set3++){
					sum = sum + c[set2][set3];
				}
			}
			printf("%ld", sum);
			if(set1 +1 < b){
				printf(" ");
			}
			sum=0;
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
