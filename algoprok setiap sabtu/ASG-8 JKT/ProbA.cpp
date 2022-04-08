#include <stdio.h>

int main(){
	int a;
	
	scanf("%d", &a);
	
	for(int set=0; set<a; set++){
		
		float b, c, d;
		scanf("%f %f %f", &b, &c, &d);
		printf("Case #%d: ", set+1);
		float count = b * (c/100);
		if(count > d){
			printf("%.0f\n", d);
		}else printf("%.0f\n", count);
			
	}
	
	
	
	
	return 0;
}
