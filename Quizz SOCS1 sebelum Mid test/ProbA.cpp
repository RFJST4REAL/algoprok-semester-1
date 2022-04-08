#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	for (int set=0; set<a; set++){
		long long int i, j;
		scanf("%lld %lld", &i, &j);
		int sum=0;
		int set1=1;
		while (i*10>=10 || 10<=j*10){
			sum+=((i%10+j%10)%10)*set1;
			set1*=10;
			i/=10;
			j/=10;	
		}
		printf("Case #%d: %lld\n", set+1, sum);
	}
	
	
	
	return 0;
}
