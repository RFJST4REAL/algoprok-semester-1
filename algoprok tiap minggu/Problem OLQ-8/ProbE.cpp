#include <stdio.h>
#include <string.h>

int main(){
	int a;
	scanf("%d", &a);
	
	char str[1001];
	for(int i=0; i<a; i++){
		scanf("%s", str);
		
		int sum=strlen(str);
		
		for(int set=0; set<sum; set++){
			if (str[set]>96){
				str[set]-=32;
			}else str[set]+=32;
		}
		
		printf("Case #%d: ", i+1);
		for(int set=0; sum-1>=0; sum--){
			printf("%c", str[sum-1]);
		}
		printf("\n");
	}
	
	return 0;
}
