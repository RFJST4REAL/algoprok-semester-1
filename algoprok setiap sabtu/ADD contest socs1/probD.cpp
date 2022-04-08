#include<stdio.h>


int main(){
	int n;
	scanf("%d", &n);
	
	for(int set=0; set<n; set++){
		for(int set1=0; set1<n; set1++){
			printf("*");	
		}
		printf("\n");
	}
	return 0;
}
