#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	for(int i=0; i<a; i++){
		int b;
		scanf("%d", &b);
		
		int c[b][b];
		for(int set=0; set<b; set++){
			for(int set1=0; set1<b; set1++){
				scanf("%d", &c[set][set1]);	
			}
		}
		int sum[b]={0};
		printf("Case #%d:", i+1);
		for(int set=0; set<b; set++){
			for(int set1=0; set1<b; set1++){
				sum[set]+=c[set1][set];
			}
			printf(" %d", sum[set]);
		}
		printf("\n");
	}
	
}
