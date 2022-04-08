#include<stdio.h>

int recursive(int a, int b){
	if(a==0 || b==0){
		return 1;
	}
	
	int sum=recursive(a-1, b-1) + recursive(a-1, b) + recursive(a, b-1);
	
	return sum;
}

int main(){
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	printf("%d", recursive(a, b));
	printf("\n");
	
	return 0;
}
