#include<stdio.h>
#include<math.h>

long int A, B, set, hasil;

int main(){
	1 <= A <= B <= 100000;
	
	scanf("%ld %ld", &A, &B);
	
	for(set = A; set <= B; set++){
		hasil= hasil + set;
	}
	
	printf("%ld\n", hasil);
	
	
	
	
	
	
	
	return 0;
}
