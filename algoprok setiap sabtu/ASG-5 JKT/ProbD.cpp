#include <stdio.h>


int main(){	
	int n;
	int a;
	int p=0;
	scanf("%d", &n);
	
	
	
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		for(int r=0, p=a-1; r<a; r++, p--){
			for(int r=0; r<a; k++)
			if(r==0 || k==0 || r==a-1 || k==a-1 || k==r || k==p){
				printf("*");
			} else{
				printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	
	

	
	
	return 0;
}
