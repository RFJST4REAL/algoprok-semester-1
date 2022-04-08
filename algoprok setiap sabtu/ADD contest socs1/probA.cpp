#include<stdio.h>


int main(){
	long int a, b, c, d;
	
	scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
	long int test= a*b;
	long int test1= c-d;
	
	if(test == test1){	
		printf("True\n");	
	}else {
		printf("False\n");
		}
		
	return 0;
}
