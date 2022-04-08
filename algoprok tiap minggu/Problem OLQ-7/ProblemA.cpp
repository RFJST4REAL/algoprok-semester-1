#include <stdio.h>

int main(){
	int a;
	char c[1001];
	for(int set=0; set<3; set++){
		scanf("%d", &a);getchar();
		
		for(int set1=0; set1<a; set1++){
			scanf("%c", &c[set1]);
		}
		
		int sum=a-1;
		printf("%c%c", c[sum],c[0]);
		printf("\n");
	}
	
	
	
	
	
	
	
	
	return 0;
}
