#include<stdio.h>
#include<string.h>

int main(){
	
	int a;
	scanf("%d", &a);
	
	char rev[1001];
	for(int set=0; set<a; set++){
		scanf(" %[^\n]", &rev);getchar();
		int count= strlen(rev);
		printf("Case #%d: ", set+1);
		for(int set1=count-1; set1>=0;set1--){
			printf("%c", rev[set1]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
