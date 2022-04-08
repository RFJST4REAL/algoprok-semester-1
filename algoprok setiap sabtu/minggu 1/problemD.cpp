#include<stdio.h>

int A, B, scan, scand, scanganjil;

int main(){
	1 <= scand <= 1000000000;
	scanf("%d", &scand);
	if (scand % 2 == 0){
		scan = scand / 2;
		printf("%d = %d + %d\n", scand, scan, scan);
	}else{
		scan = (scand - 1) / 2;
		scanganjil = scand - scan;
		printf("%d = %d + %d\n", scand, scan, scanganjil);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
