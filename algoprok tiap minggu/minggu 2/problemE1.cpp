#include<stdio.h>
#include<math.h>

double x, bulan1, bulan2, bulan3;
double y;

int main(){
	1 <= x <= 100000;
	0.00 <= y <= 1000.00;
	
	
	scanf("%lf %lf", &x, &y);
	
	bulan1 = x + (x * y/100);
	bulan2 = bulan1 + (bulan1 * y/100);
	bulan3 = bulan2 + (bulan2 * y/100);
	
	printf("%.2f\n", bulan3);

	
	
	
	
	
	
	
	return 0;
}
