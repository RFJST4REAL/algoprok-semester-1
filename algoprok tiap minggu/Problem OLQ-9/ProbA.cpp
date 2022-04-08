#include <stdio.h>


int main(){
	
	long int fibo[100000];
	long int count;
	
	scanf("%ld %ld", &fibo[0], &fibo[1]);getchar();
	scanf("%ld", &count);getchar;
	
	for (int set=2; set<=count; set++){
		fibo[set]=fibo[set-2]+fibo[set-1];
	}
	
	printf("%ld\n", fibo[count]);
	
	
	return 0;
}
