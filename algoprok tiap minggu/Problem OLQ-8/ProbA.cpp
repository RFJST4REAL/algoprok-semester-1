#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	for(int set=0; set<a; set++){
		long int b, c, d;
		scanf("%ld %ld %ld", &b, &c, &d);
		printf("Case #%d: ", set+1);
		if((b+c>d)  && (b+d>c) && (c+d>b)){
			printf("Yes\n");
		}else printf("No\n");
	}
}
